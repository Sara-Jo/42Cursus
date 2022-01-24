/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:13:47 by sjo               #+#    #+#             */
/*   Updated: 2022/01/24 17:21:01 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_write_null(void)
{
    write(1, "(null)", 6);
	return (6);
}

int	ft_printf_percent(const char **str)
{
	if ((char)**str == '%')
	{
		write(1, '%', 1);
		str++;
		return (1);
	}
	return (0);
}

int ft_print_s(const char **str, va_list ap)
{
    char *s;
    int  i;

    if ((char)**str == 's')
    {
        s = va_arg(ap, char*);
        i = 0;
        if (!s)
            return (ft_write_null());
        while (s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
        return (ft_strlen(s));
    }
    return (0);
}