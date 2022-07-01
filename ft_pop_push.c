/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:03:36 by sjo               #+#    #+#             */
/*   Updated: 2022/06/28 22:58:15 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_pop(t_stack **stack)
{
    t_stack *pop;

    if (!stack)
        return (0);
    if (!*stack)
        return (0);
    pop = *stack;
    if (*stack == (*stack)->next)
        *stack = 0;
    else
    {
        (*stack)->prev->next = (*stack)->next;
        (*stack)->next->prev = (*stack)->prev;
        *stack = (*stack)->next;
        pop->prev = pop;
        pop->next = pop;
    }
    return (pop);
}

void ft_push(t_stack **stack, t_stack *node)
{
    if (!stack || !node)
        return;
    if (*stack)
    {
        (*stack)->prev->next = node;
        node->prev = (*stack)->prev;
        (*stack)->prev = node;
        node->next = *stack;
    }
    *stack = node;
}