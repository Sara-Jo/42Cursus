/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:56:19 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:14:16 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_free(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return;
	stack->prev->next = NULL;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
