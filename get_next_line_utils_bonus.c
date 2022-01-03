/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:26:57 by sjo               #+#    #+#             */
/*   Updated: 2022/01/03 14:27:08 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;

	//
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	//
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	s1_len = (int)ft_strlen(s1);
	s2_len = (int)ft_strlen(s2);
	str = malloc (sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < s2_len)
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}