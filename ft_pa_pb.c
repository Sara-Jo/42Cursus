/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:01:57 by sjo               #+#    #+#             */
/*   Updated: 2022/06/28 22:03:19 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_a, ft_pop(stack_b));
    ft_putstr("pa\n");
}

void ft_pb(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_b, ft_pop(stack_a));
    ft_putstr("pb\n");
}