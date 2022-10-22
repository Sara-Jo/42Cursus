/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:13:25 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 14:13:47 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_num(t_stack *stack)
{
	int	min_num;
	int	count;
	int	i;

	i = 0;
	count = ft_count_node(stack);
	min_num = stack->num;
	while (i < count)
	{
		if (min_num > stack->num)
			min_num = stack->num;
		stack = stack->next;
		i++;
	}
	return (min_num);
}

int	ft_max_num(t_stack *stack)
{
	int	max_num;
	int	count;
	int	i;

	i = 0;
	count = ft_count_node(stack);
	max_num = stack->num;
	while (i < count)
	{
		if (max_num < stack->num)
			max_num = stack->num;
		stack = stack->next;
		i++;
	}
	return (max_num);
}
