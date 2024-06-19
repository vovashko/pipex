/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex_bonus.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 12:25:36 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/11 17:32:02 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	child_process(int *fd, char *cmd, char **env)
{
	close(fd[0]);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	exec_cmd(cmd, env);
}

void	parent_process(int *fd)
{
	close(fd[1]);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
}

void	pipe_flow(char *cmd, char **env)
{
	int	pid;
	int	fd[2];

	if (pipe(fd) == -1)
	{
		perror("Error creating pipe");
		exit(1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error creating fork");
		exit(1);
	}
	if (pid == 0)
		child_process(fd, cmd, env);
	else
		parent_process(fd);
}

int	main(int argc, char **argv, char **env)
{
	int	cmd_ind;
	int	fd[2];

	if (argc >= 5)
	{
		cmd_ind = 2;
		if (access(argv[1], F_OK | R_OK) != 0)
		{
			perror("Error with input file");
			exit(1);
		}
		fd[0] = open(argv[1], O_RDONLY);
		fd[1] = open(argv[argc - 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		while (cmd_ind < argc - 2)
		{
			pipe_flow(argv[cmd_ind], env);
			cmd_ind++;
		}
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		exec_cmd(argv[argc - 2], env);
		return (0);
	}
}
