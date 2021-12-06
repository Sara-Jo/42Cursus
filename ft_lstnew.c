/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:26:49 by sjo               #+#    #+#             */
/*   Updated: 2021/12/03 14:58:57 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
<<<<<<< HEAD
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
=======
	t_list  *lst;

	if(!(lst = (t_list *)malloc(sizeof(t_list))))
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
