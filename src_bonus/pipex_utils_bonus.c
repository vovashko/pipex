/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex_utils_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:55:36 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/11 17:21:54 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	free_array(char **strings, size_t ind)
{
	while (ind > 0)
	{
		ind--;
		free(strings[ind]);
	}
	free(strings);
}

char	*ft_getenv(char *name, char **env)
{
	size_t	name_len;
	size_t	i;

	name_len = ft_strlen(name);
	i = 0;
	while (env[i] != NULL)
	{
		if (ft_strncmp(env[i], name, name_len) == 0 && env[i][name_len] == '=')
			return (env[i] + name_len + 1);
		i++;
	}
	return (NULL);
}

char	*get_path(char *cmd, char **env)
{
	char	*full_path;
	char	**direct;
	char	*path_dir;
	char	**split_cmd;
	size_t	i;

	i = 0;
	direct = ft_split(ft_getenv("PATH", env), ':');
	split_cmd = ft_split(cmd, ' ');
	while (direct[i])
	{
		path_dir = ft_strjoin(direct[i], "/");
		full_path = ft_strjoin(path_dir, split_cmd[0]);
		free(path_dir);
		if (access(full_path, F_OK | X_OK) == 0)
		{
			free_array(split_cmd, 0);
			return (full_path);
		}
		free(full_path);
		i++;
	}
	free_array(direct, i);
	free_array(split_cmd, 0);
	return (cmd);
}

void	exec_cmd(char *cmd, char **env)
{
	char	*path;
	char	**cmd_array;
	int		i;

	cmd_array = ft_split(cmd, ' ');
	path = get_path(cmd_array[0], env);
	execve(path, cmd_array, env);
	perror("Command not found");
	i = 0;
	while (cmd_array[i])
	{
		free(cmd_array[i]);
		i++;
	}
	free_array(cmd_array, i - 1);
	exit(1);
}
