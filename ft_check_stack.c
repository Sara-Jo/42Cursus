/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:39:34 by sjo               #+#    #+#             */
/*   Updated: 2022/06/29 16:49:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_double(t_stack *stack)
{
    t_stack *check;

    check = stack->prev;
    while (stack != check)
    {
        if (check->num == stack->num)
            return (1);
        stack = stack->next;
    }
    return (0);
}

int ft_check_sorted_ascend(t_stack *stack, int count)
{
    int i;

    i = 0;
    while (i < count - 1)
    {
        if (stack->num > stack->next->num)
            return (0);
        stack = stack->next;
        i++;
    }
    return (1);
}

int ft_check_sorted_descend(t_stack *stack, int count)
{
    int i;

    i = 0;
    while (i < count - 1)
    {
        if (stack->num < stack->next->num)
            return (0);
        stack = stack->next;
        i++;
    }
    return (1);
}