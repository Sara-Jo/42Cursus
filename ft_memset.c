/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:42:43 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:03:24 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_dest;
	unsigned char	val;
	size_t			i;

	new_dest = b;
	val = c;
	i = 0;
<<<<<<< HEAD
	while (i++ < len)
=======
	while(i++ < len)
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		*new_dest++ = val;
	return (b);
}
