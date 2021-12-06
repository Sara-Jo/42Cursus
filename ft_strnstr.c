/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:45:42 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/06 11:03:22 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 15:16:11 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		if (hay[i] == needle[j])
		{
			while (i + j < len && hay[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&hay[i]);
			}
		}
		i++;
	}
	return (0);
}
=======
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

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
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
