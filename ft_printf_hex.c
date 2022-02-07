/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:22:04 by sjo               #+#    #+#             */
/*   Updated: 2022/02/07 15:07:30 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(size_t nbr, char *base)
{
	static int	len;
	static int	depth;
	size_t		len_base;
	int			len_copy;

	len_base = ft_strlen(base);
	depth++;
	if (nbr >= len_base)
	{
		ft_putnbr(nbr / len_base, base);
		ft_putnbr(nbr % len_base, base);
	}
	else
	{
		write(1, &base[nbr], 1);
		len++;
	}
	depth--;
	len_copy = len;
	if (depth == 0)
		len = 0;
	return (len_copy);
}

int	ft_printf_p(const char **str, va_list ap)
{
	int	i;

	if ((char)**str == 'p')
	{
		write(1, "0x", 2);
		i = ft_putnbr(va_arg(ap, size_t), "0123456789abcdef");
		(*str)++;
		return (i + 2);
	}
	return (0);
}

int	ft_printf_hex(const char **str, va_list ap)
{
	int	i;

	if ((char)**str == 'x')
	{
		i = ft_putnbr(va_arg(ap, unsigned int), "0123456789abcdef");
		(*str)++;
		return (i);
	}
	else if ((char)**str == 'X')
	{
		i = ft_putnbr(va_arg(ap, unsigned int), "0123456789ABCDEF");
		(*str)++;
		return (i);
	}
	return (ft_printf_p(str, ap));
}
