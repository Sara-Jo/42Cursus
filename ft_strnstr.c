/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:45:42 by sjo               #+#    #+#             */
/*   Updated: 2021/11/28 19:54:29 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;

    if (needle[0] == '\0')
        return ((char *)haystack);
    while (*haystack != '\0' && len-- > 0)
    {
        i = 0;
        while (*(haystack + i) == *(needle + i) && i < len)
        {
            i++;
            if (*(needle + i) == '\0')
                return ((char *)haystack);
        }
        haystack++;
    }
    return (0);
}