/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:33 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:12:41 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	if (!*stack)
		*stack = new
	else
	{
		(*stack)->prev->next = new;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		new->next = (*stack);
	}
	if (ft_check_double(*stack))
	{
		free(*stack);
		ft_error_exit("Error! Duplicate!\n");
	}
}

t_stack	*ft_new_node(int nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = nbr;
	new->prev = new;
	new->next = new;
	return (new);
}

int	ft_count_node(t_stack *stack)
{
	t_stack	*new;
	int		i;

	if (!stack)
		return (0);
	i = 1;
	new = stack->prev;
	while (new != stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
