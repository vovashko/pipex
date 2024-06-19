NAME = pipex
NAME_BONUS = pipex_bonus
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = cc

SRCS = src/pipex.c src/pipex_utils.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS = src_bonus/pipex_bonus.c src_bonus/pipex_utils_bonus.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)


LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS) : $(OBJS_BONUS)
			$(MAKE) -C $(LIBFT_DIR)
			$(CC) $(FLAGS) $(OBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

re_bonus: fclean bonus

.PHONY: all clean fclean re bonus re_bonus