/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:05:29 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:09:24 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freeall(char **s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

int	ft_wordcount(char const *s, char c)
{
	int	count;
<<<<<<< HEAD
	int	i;
=======
   	int	i;
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_firstword(const char *s, char c)
{
	size_t	len;
	char	*ptr;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
<<<<<<< HEAD
	if (!(ptr = ft_calloc(len + 1, sizeof(char))))
=======
	if(!(ptr = ft_calloc(len + 1, sizeof(char))))
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

char	**ft_inside_split(char const *s, char c, int nbr_of_words)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
<<<<<<< HEAD
	if (!(ptr = (char **)ft_calloc(nbr_of_words + 1, sizeof(char *))))
		return (NULL);
=======
	if(!(ptr = (char **)ft_calloc(nbr_of_words + 1, sizeof(char *))))
		return (NULL);

>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
	while (i < nbr_of_words && s[j])
	{
		if (s[j] != c)
		{
			ptr[i] = ft_firstword(&s[j], c);
			if (!ptr[i++])
				return (ft_freeall(ptr));
			while (s[j] && s[j] != c)
				j++;
		}
		else
			j++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int	nbr_of_words;

	if (!s)
		return (NULL);
	nbr_of_words = ft_wordcount(s, c);
	return (ft_inside_split(s, c, nbr_of_words));
}
