/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:31:23 by mabbas            #+#    #+#             */
/*   Updated: 2022/12/18 13:04:37 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	pipex(int argc, char **argv, char **envp)
{
	t_pipe	pipex;

	if (argc > 5)
	{
		ft_putendl_fd("Argument threshold exceeded!\n", 2);
		exit(EXIT_FAILURE);
	}
	else if (argc == 5)
	{
		pipe_init(argc, argv, envp, &pipex);
		exec_cmd(&pipex);
		pipe_exit(&pipex);
	}
	else
	{
		ft_putendl_fd("Argument threshold not covered\n", 2);
		exit(EXIT_FAILURE);
	}
	return (pipe.lock_state);
}
