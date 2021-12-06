/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:10:45 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/06 13:19:52 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;
=======
/*   Updated: 2021/12/03 12:29:09 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *s)
{
	int		i;
	int		sign;
	int		result;
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8

	i = 0;
	sign = 1;
	result = 0;
<<<<<<< HEAD
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * sign > 2147483647)
			return (-1);
		else if (result * sign < -2147483648)
			return (0);
		else
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}		
	}
	return (sign * result);
}
=======
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
