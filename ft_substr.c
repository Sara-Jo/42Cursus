/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:57:27 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:18:41 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
<<<<<<< HEAD
	char	*tmp;
=======
	char *tmp;
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}
