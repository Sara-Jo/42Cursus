/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:52:26 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:02:49 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_stack **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		ft_sa(*stack);
	else
		return ;
}

void	ft_sort_three(t_stack **stack)
{
	if (ft_check_sorted_ascend(*stack, 3))
		return ;
	if ((*stack)->num == ft_min_num(*stack))
	{
		ft_rra(stack);
		ft_sa(*stack);
	}
	else if ((*stack)->num == ft_max_num(*stack))
	{
		ft_ra(stack);
		if ((*stack)->next->num == ft_min_num(*stack))
			ft_sa(*stack);
	}
	else
	{
		if ((*stack)->next->num == ft_min_num(*stack))
			ft_sa(*stack);
		else
			ft_rra(stack);
	}
}
