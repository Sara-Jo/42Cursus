/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:22:04 by sjo               #+#    #+#             */
/*   Updated: 2022/01/24 17:21:13 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_p(const char **str, va_list ap)
{
    int i;

    if ((char)**str == 'p')
    {
        write(1, "0x", 2);
        i = ft_putnbr(va_arg(ap, unsigned int), "0123456789abcdef");
        return (i + 2);
    }
    return (0);
}

int ft_printf_hex(const char **str, va_list ap)
{
    int i;

    if ((char)**str == 'x')
    {
        i = ft_putnbr(va_arg(ap, unsigned int), "0123456789abcdef");
        return (i);
    }
    else if ((char)**str == 'X')
     {
        i = ft_putnbr(va_arg(ap, unsigned int), "0123456789ABCDEF");
        return (i);
    }
    return (ft_printf_p(str, ap));
}
