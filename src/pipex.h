/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:55:53 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/06 13:01:04 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

void	child_process(int *fd, char **argv, char **env);
void	parent_process(int *fd, char **argv, char **env);
void	free_array(char **strings, size_t ind);
char	*ft_getenv(char *name, char **env);
char	*get_path(char *cmd, char **env);
void	exec_cmd(char *cmd, char **env);

#endif
