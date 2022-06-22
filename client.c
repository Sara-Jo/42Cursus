/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:05:59 by sjo               #+#    #+#             */
/*   Updated: 2022/06/23 01:45:22 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_verify_bit(int server_pid, char c)
{
	int bit;

	bit = 8;
	while (bit--)
	{
		if ((c >> bit & 1) == 0)
			kill(server_pid, SIGUSR1);
		else if ((c >> bit & 1) == 1)
			kill(server_pid, SIGUSR2);
		usleep(500);
	}
}

void send_signal(int server_pid, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_verify_bit(server_pid, str[i]);
		usleep(200);
		i++;
	}
}

int main(int argc, char **argv)
{
	int server_pid;

	if (argc != 3)
	{
		ft_putstr("Error! need to write as: ./client [Server PID] [Message]\n");
		exit(0);
	}
	server_pid = ft_atoi(argv[1]);
	// client pid 입력 예외처리
	if (server_pid <= 0)
		ft_putstr("Pid error!");
	send_signal(server_pid, argv[2]);
	return (0);
}
