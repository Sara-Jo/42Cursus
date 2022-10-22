/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:59 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:17:16 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exception_three_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_b)->next->num == ft_max_num(*stack_b))
		ft_sb(*stack_b);
	if ((*stack_b)->num == ft_max_num(*stack_b))
	{
		ft_pa(stack_a, stack_b);
		if ((*stack_b)->num < (*stack_b)->next->num)
			ft_sb(*stack_b);
		ft_pa(stack_a, stack_b);
		ft_pa(stack_a, stack_b);
	}
	else
	{
		ft_pa(stack_a, stack_b);
		ft_sb(*stack_b);
		ft_pa(stack_a, stack_b);
		ft_sa(*stack_a);
		ft_pa(stack_a, stack_b);
		if ((*stack_a)->num > (*stack_a)->next->num)
			ft_sa(*stack_a);
	}
}

int	ft_exit_three_b_to_a(t_stack **stack_a, t_stack **stack_b, int count)
{
	if (count == 3)
	{
		ft_exception_three_b_to_a(stack_a, stack_b);
		return (1);
	}
	if (count == 2 && ft_check_sorted_ascend(*stack_b, count))
	{
		ft_sb(*stack_b);
		ft_pa(stack_a, stack_b);
		ft_pa(stack_a, stack_b);
		return (1);
	}
	if (ft_check_sorted_descend(*stack_b, count))
	{
		while (count--)
			ft_pa(stack_a, stack_b);
		return (1);
	}
	return (0);
}

void	ft_b_to_a(t_stack **stack_a, t_stack **stack_b, int count)
{
	int	pivot;
	int	count_rb;
	int	count_pa;
	int	i;

	if (ft_exit_three_b_to_a(stack_a, stack_b, count))
		return ;
	pivot = ft_pivot(*stack_b, count);
	count_rb = 0;
	count_pa = 0;
	while (count--)
	{
		if ((*stack_b)->num >= pivot && ++count_pa)
			ft_pa(stack_a, stack_b);
		else if ((*stack_b)->num < pivot && ++count_rb)
			ft_rb(stack_b);
	}
	i = 0;
	while (i++ < count_rb)
		ft_rrb(stack_b);
	ft_a_to_b(stack_a, stack_b, count_pa);
	ft_b_to_a(stack_a, stack_b, count_rb);
}
