/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:58:26 by sjo               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/06 11:03:23 by sjo              ###   ########.fr       */
=======
/*   Updated: 2021/12/03 14:58:27 by sjo              ###   ########.fr       */
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
<<<<<<< HEAD
	t_list	*newlist;
	t_list	*node;

	node = NULL;
	while (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (!newlist)
		{
			ft_lstclear(&node, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&node, newlist);
		lst = lst->next;
	}
	newlist = NULL;
	return (node);
}
=======
	t_list  *new_head;
	t_list  *new_next;
	t_list  *curr;

	if(lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if((new_head = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	curr = new_head;
	lst = lst->next;
	while (lst)
	{
		if((new_next = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		curr->next = new_next;
		curr = new_next;
		lst = lst->next;
	}
	return (new_head);
}
>>>>>>> c7f812667f2e79ef09acb8d093288f4f897c7be8
