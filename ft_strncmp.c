/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:55:36 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/04 13:05:21 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
=======
/*   Updated: 2021/12/03 15:15:32 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
{
	unsigned int	i;

	i = 0;
<<<<<<< HEAD
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - s2[i]);
=======
	if ((!s1 && !s2) || n == 0)
		return (0);
	if (!s1)
		return (-s2[i]);
	if (!s2)
		return (s1[i]);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
}
