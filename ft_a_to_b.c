/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:07:51 by sjo               #+#    #+#             */
/*   Updated: 2022/06/29 19:22:05 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_exception_three_a_to_b(t_stack **stack_a, t_stack **stack_b)
{
    if (ft_check_sorted_ascend(*stack_a, 3))
        return;
    if ((*stack_a)->next->next->num == ft_max_num(*stack_a))
    {
        ft_sa(*stack_a);
        return;
    }
    if ((*stack_a)->num == ft_max_num(*stack_a))
        ft_sa(*stack_a);
    if ((*stack_a)->num == ft_min_num(*stack_a))
    {
        ft_ra(stack_a);
        ft_sa(*stack_a);
        ft_rra(stack_a);
    }
    else
    {
        ft_pb(stack_a, stack_b);
        ft_sa(*stack_a);
        ft_ra(stack_a);
        ft_pa(stack_a, stack_b);
        ft_rra(stack_a);
    }
}

int ft_exit_three_to_b(t_stack **stack_a, t_stack **stack_b, int count)
{
    if (count == 2 && ft_check_sorted_descend(*stack_a, count))
        ft_sa(*stack_a);
    if (count == 3 && ft_count_node(*stack_a) == 3)
        ft_sort_three(stack_a);
    // 이건 어떤 케이스인지?
    else if (count == 3)
        ft_exception_three_a_to_b(stack_a, stack_b);
    if (ft_check_sorted_ascend(*stack_a, count))
        return (1);
    return (0);
}

void ft_a_to_b(t_stack **stack_a, t_stack **stack_b, int count)
{
    int pivot;
    int count_ra;
    int count_pb;
    int i;

    if (ft_exit_three_to_b(stack_a, stack_b, count))
        return;
    pivot = ft_pivot(*stack_a, count);
    count_ra = 0;
    count_pb = 0;
    while (count--)
    {
        if ((*stack_a)->num >= pivot && ++count_ra)
            ft_ra(stack_a);
        else if ((*stack_a)->num < pivot && ++count_pb)
            ft_pb(stack_a, stack_b);
    }
    i = 0;
    // 이건 왜하는거임...
    while (i++ < count_ra)
        ft_rra(stack_a);
    ft_a_to_b(stack_a, stack_b, count_ra);
    ft_b_to_a(stack_a, stack_b, count_pb);
}