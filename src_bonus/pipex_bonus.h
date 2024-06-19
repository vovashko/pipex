/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex_bonus.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:55:53 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/11 17:26:04 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include "../libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

void	pipe_flow(char *cmd, char **env);
void	child_process(int *fd, char *cmd, char **env);
void	parent_process(int *fd);
void	free_array(char **strings, size_t ind);
char	*ft_getenv(char *name, char **env);
char	*get_path(char *cmd, char **env);
void	exec_cmd(char *cmd, char **env);

#endif
