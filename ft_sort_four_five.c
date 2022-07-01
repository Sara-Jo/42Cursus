/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:09:16 by sjo               #+#    #+#             */
/*   Updated: 2022/06/28 23:19:14 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
    int min_a;

    if (ft_check_sorted_ascend(*stack_a, 4))
        return;
    min_a = ft_min_num(*stack_a);
    while ((*stack_a)->num != min_a)
        ft_ra(stack_a);
    ft_pb(stack_a, stack_b);
    ft_sort_three(stack_a);
    ft_pa(stack_a, stack_b);
}

void ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int pivot;
    int i;

    if (ft_check_sorted_ascend(*stack_a, 5))
        return;
    else
    {
        pivot = ft_pivot(*stack_a, 5);
        i = 0;
        while (i < 5)
        {
            if ((*stack_a)->num < pivot)
                ft_pb(stack_a, stack_b);
            else
                ft_ra(stack_a);
            i++;
        }
    }
    ft_sort_three(stack_a);
    if ((*stack_b)->num < (*stack_b)->next->num)
        ft_sb(*stack_b);
    ft_pa(stack_a, stack_b);
    ft_pa(stack_a, stack_b);
}