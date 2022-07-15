/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:41:49 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:06:08 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack_a)
{
	if (!*stack_a)
		return ;
	*stack_a = (*stack_a)->prev;
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	if (!*stack_b)
		return ;
	*stack_b = (*stack_b)->prev;
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	ft_putstr("rrr\n");
}
