/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:06:44 by sjo               #+#    #+#             */
/*   Updated: 2022/06/23 15:37:17 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_signal(int signal)
{
	static int	code;
	static int	count;

	count += 1;
	code = code << 1;
	if (signal == SIGUSR2)
		code += 1;
	if (count == 8)
	{
		ft_putchar(code);
		code = 0;
		count = 0;
	}
}

int	main(void)
{
	char	*pid;
	int		get_pid;

	get_pid = getpid();
	if (!(100 < get_pid && get_pid < 100000))
	{
		ft_putstr("PID ERROR! PID is out of the range!");
		exit(0);
	}
	pid = ft_itoa(get_pid);
	ft_putstr(pid);
	ft_putchar('\n');
	free(pid);
	while (1)
	{
		signal(SIGUSR1, ft_signal);
		signal(SIGUSR2, ft_signal);
		pause();
	}
	return (0);
}
