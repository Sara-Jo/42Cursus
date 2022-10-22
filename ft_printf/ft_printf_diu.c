/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:45:52 by sjo               #+#    #+#             */
/*   Updated: 2022/02/07 13:31:54 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(const char **str, va_list ap)
{
	int		i;
	char	*s;

	if ((char)**str == 'd' || (char)**str == 'i')
	{
		s = ft_itoa(va_arg(ap, int));
		if (!s)
			return (0);
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		i = ft_strlen(s);
		(*str)++;
		free(s);
		return (i);
	}
	return (0);
}

int	ft_printf_u(const char **str, va_list ap)
{
	int		i;
	char	*s;

	if ((char)**str == 'u')
	{
		s = ft_utoa(va_arg(ap, int));
		if (!s)
			return (0);
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		i = ft_strlen(s);
		(*str)++;
		free(s);
		return (i);
	}
	return (0);
}
