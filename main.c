/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 01:49:26 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/07 02:03:41 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	environ_op(char **envp)
{
	static char	**_envp;
	int			i;

	i = 0;
	if (!_envp)
	{
		_envp = envp;
		return ;
	}
	while (envp[i])
	{

	}
}

void	shell_init(void)
{

	return ;
}

int		main(int ac, char **av, char **envp)
{
	environ_op(envp);
	return (0);
}
