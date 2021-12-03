/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:58:39 by sjo               #+#    #+#             */
/*   Updated: 2021/11/27 14:36:31 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy (void *dst, const void *src, size_t n)
{
    unsigned char         *new_dst;
    const unsigned char   *new_src;

    new_dst = dst;
    new_src = src;
    while (n--)
        *new_dst++ = *new_src++;
    return (dst);
}