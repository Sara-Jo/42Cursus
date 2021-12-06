/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:31:59 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:10:41 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;
    
	len = ft_strlen(s1);
<<<<<<< HEAD
	if (!(dst = malloc((len + 1) * sizeof(char))))
=======
	if(!(dst = malloc((len + 1) * sizeof(char))))
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
