/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:09:43 by sjo               #+#    #+#             */
/*   Updated: 2021/11/27 19:24:30 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_tmp;
    unsigned char   *s2_tmp;
    size_t          i;

    s1_tmp = (unsigned char *)s1;
    s2_tmp = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return (0);
    while (n-- && (s1_tmp[i] == s2_tmp[i]))
        i++;
    return (s1_tmp[i] - s2_tmp[i]);
}