/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:59:10 by sjo               #+#    #+#             */
/*   Updated: 2022/06/28 23:02:22 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_stack **stack_a)
{
    if (!*stack_a)
        return;
    *stack_a = (*stack_a)->next;
    ft_putstr("ra\n");
}

void ft_rb(t_stack **stack_b)
{
    if (!*stack_b)
        return;
    *stack_b = (*stack_b)->next;
    ft_putstr("rb\n");
}

void ft_rr(t_stack **stack_a, t_stack **stack_b)
{
    if (!stack_a || !stack_b)
        return;
    ft_ra(stack_a);
    ft_rb(stack_b);
    ft_putstr("rr\n");
}