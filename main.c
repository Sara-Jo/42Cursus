/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:43:42 by sjo               #+#    #+#             */
/*   Updated: 2022/07/15 13:58:34 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	ft_check(argc, argv);
	while (argv[i])
		ft_init_stack(&stack_a, ft_new_node(ft_atoi(argv[i++])));
	ft_print_node(stack_a);
	if (argc >= 2)
	{
		if (argc - 1 == 2)
			ft_sort_two(&stack_a);
		else if (argc - 1 == 3)
			ft_sort_three(&stack_a);
		else if (argc - 1 == 4)
			ft_sort_four(&stack_a, &stack_b);
		else if (argc - 1 == 5)
			ft_sort_five(&stack_a, &stack_b);
		ft_a_to_b(&stack_a, &stack_b, ft_count_node(stack_a));
	}
	ft_stack_free(stack_a);
	return (0);
}
