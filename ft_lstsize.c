/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:56:58 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 14:59:28 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
<<<<<<< HEAD
	int	i;

	i = 0;
	while (lst)
=======
	int i;

	i = 0;
	while(lst)
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
