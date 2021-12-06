/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:45:42 by sjo               #+#    #+#             */
/*   Updated: 2021/12/06 11:03:22 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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