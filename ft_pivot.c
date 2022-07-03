/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:12:50 by sjo               #+#    #+#             */
/*   Updated: 2022/07/03 19:57:55 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

int ft_pivot(t_stack *stack, int count)
{
    int *tab;
    int i;
    int return_value;

    tab = malloc(sizeof(int) * count);
    i = 0;
    while (i < count)
    {
        tab[i++] = stack->num;
        stack = stack->next;
    }
    ft_sort_tab(tab, count);
    return_value = tab[(int)(count / 2)];
    free(tab);
    return (return_value);
}