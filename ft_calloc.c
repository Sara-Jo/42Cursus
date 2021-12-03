/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:57:48 by sjo               #+#    #+#             */
/*   Updated: 2021/11/28 20:26:29 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *tmp;

    i = 0;
    tmp = s;
    while (n--)
        tmp[i++] = 0;
    return (s);
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *mem;

    if(!(mem = malloc(count * size)))
        return (NULL);
    ft_bzero(mem, (count * size));
    return (mem);
}
