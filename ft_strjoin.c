/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:32:04 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:11:48 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
<<<<<<< HEAD
	char	*tmp;
	int 	s1_len;
	int 	s2_len;
=======
	char *tmp;
	int s1_len;
	int s2_len;
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
<<<<<<< HEAD
	if (!(tmp = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
=======
	if(!(tmp = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		return (NULL);
	ft_strlcpy(tmp, s1, s1_len + 1);
	ft_strlcat(tmp + (s1_len), s2, s2_len + 1);
	return (tmp);
}
