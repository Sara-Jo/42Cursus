/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:44:24 by sjo               #+#    #+#             */
/*   Updated: 2021/11/27 18:16:39 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *new_dst;
    const unsigned char   *new_src;

    new_dst = dst;
    new_src = src;
    if (dst == src || len == 0)
        return (dst);
    if (dst < src)
    {
        while (len--)
            *new_dst++ = *new_src++;
    }
    else 
    {
        new_dst += len;
        new_src += len;
        while (len--)
            *new_dst-- = *new_src--;
    }
    return (dst);
}