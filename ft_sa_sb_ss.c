/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:55:04 by sjo               #+#    #+#             */
/*   Updated: 2022/06/28 22:01:37 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack *stack_a)
{
    int tmp;

    if (!stack_a)
        return;
    tmp = stack_a->num;
    stack_a->num = stack_a->next->num;
    stack_a->next->num = tmp;
    ft_putstr("sa\n");
}

void ft_sb(t_stack *stack_b)
{
    int tmp;

    if (!stack_b)
        return;
    tmp = stack_b->num;
    stack_b->num = stack_b->next->num;
    stack_b->next->num = tmp;
    ft_putstr("sb\n");
}

void ft_ss(t_stack *stack_a, t_stack *stack_b)
{
    if (!stack_a || !stack_b)
        return;
    ft_sa(stack_a);
    ft_sb(stack_b);
    ft_putstr("ss\n");
}