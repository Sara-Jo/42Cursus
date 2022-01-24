/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:58:07 by sjo               #+#    #+#             */
/*   Updated: 2022/01/24 17:26:14 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_putnbr(int nbr, char *base)
{
	int base_len;
	int print_len;

	base_len = ft_strlen(base);
	print_len = 0;
	if (nbr >= base_len)
	{
		ft_putnbr(nbr / base_len, base);
		ft_putnbr(nbr % base_len, base);
	}
	else
	{
		write(1, &base[nbr], 1);
		print_len++;
	}
	return (print_len);
}

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
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
	char		*result;
	int			len;
	long int	n_copy;

	len = ft_intlen(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
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
		len--;
	}
	return (result);
}