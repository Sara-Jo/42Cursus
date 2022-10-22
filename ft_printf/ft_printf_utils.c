/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:58:07 by sjo               #+#    #+#             */
/*   Updated: 2022/02/07 15:07:32 by sjo              ###   ########.fr       */
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

int	ft_untlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
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

char	*ft_utoa(unsigned int n)
{
	char			*result;
	unsigned int	len;
	long int		n_copy;

	len = ft_untlen(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	n_copy = (long int)n;
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
