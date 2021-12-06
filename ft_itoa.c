/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:46:30 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/04 12:56:23 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 14:53:36 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
<<<<<<< HEAD
		return (1);
=======
		return (0);
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		i++;
		n /= 10;
	}	
	return (i);
}

char	*ft_itoa(int n)
{
<<<<<<< HEAD
	char		*result;
	int		len;
	long int	n_copy;

	len = ft_intlen(n);
	if (!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	n_copy = (long int)n;
	if (n_copy < 0)
	{
		result[0] = '-';
		n_copy *= -1;
	}
	if (n_copy == 0)
		result[0] = '0';
	while (n_copy)
	{
		result[len - 1] = (n_copy % 10) + '0';
		n_copy /= 10;
=======
	char	*result;
	int		len;

	len = ft_intlen(n);
	if(!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[len - 1] = (n % 10) + '0';
		n /= 10;
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		len--;
	}
	return (result);
}
