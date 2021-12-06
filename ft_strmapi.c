/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:00:13 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 15:14:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
<<<<<<< HEAD
	int	len;
	char	*tmp;
	int	i;

	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	if (!(tmp = (char*)malloc(sizeof(char) * (len + 1))))
=======
	int		len;
	char	*tmp;
	int		i;

	if(s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	if(!(tmp = (char*)malloc(sizeof(char) * (len + 1))))
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
