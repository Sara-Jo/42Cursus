/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:58:39 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/06 10:40:03 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 15:01:39 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	unsigned char		*new_dst;
	const unsigned char	*new_src;

	new_dst = dst;
	new_src = src;
<<<<<<< HEAD
	if (!dst && !src)
		return (0);
=======
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
	while (n--)
		*new_dst++ = *new_src++;
	return (dst);
}
