/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:44:24 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/04 12:58:13 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 15:02:40 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
<<<<<<< HEAD
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}	
=======
	unsigned char		*new_dst;
	const unsigned char	*new_src;

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
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
	return (dst);
}
