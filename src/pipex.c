/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 12:25:36 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/11 16:13:16 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process(int *fd, char **argv, char **env)
{
	if (access(argv[1], F_OK) != 0)
	{
		perror("Error opening file");
		exit(1);
	}
	if (access(argv[1], R_OK) != 0)
	{
		perror("Read permission denied");
		exit(1);
	}
	dup2(fd[1], STDOUT_FILENO);
	dup2(open(argv[1], O_RDONLY), STDIN_FILENO);
	close(fd[1]);
	close(fd[0]);
	exec_cmd(argv[2], env);
}

void	parent_process(int *fd, char **argv, char **env)
{
	int	outfile;

	dup2(fd[0], STDIN_FILENO);
	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile == -1)
	{
		perror("Error opening outfile");
		exit(1);
	}
	dup2(outfile, STDOUT_FILENO);
	close(fd[1]);
	close(fd[0]);
	exec_cmd(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int	fd[2];
	int	pid;

	if (argc != 5)
	{
		perror("Incorrect number of arguments");
		exit(1);
	}
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
		child_process(fd, argv, env);
	parent_process(fd, argv, env);
	close(fd[0]);
	close(fd[1]);
	return (0);
}
