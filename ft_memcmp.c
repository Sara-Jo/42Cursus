i/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:09:43 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/04 12:44:48 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 15:01:02 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_memcmp(const void *s1, const void *s2, size_t n)
=======
int	t_memcmp(const void *s1, const void *s2, size_t n)
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t			i;

	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	i = 0;
<<<<<<< HEAD
 	while (n--)
	{
		if (s1_tmp[i] != s2_tmp[i])
			return (s1_tmp[i] - s2_tmp[i]);
		i++;
	}
	return (0);
=======
	if (n == 0)
		return (0);
	while (n-- && (s1_tmp[i] == s2_tmp[i]))
		i++;
	return (s1_tmp[i] - s2_tmp[i]);
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
}
