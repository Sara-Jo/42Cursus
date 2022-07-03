/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:47:16 by sjo               #+#    #+#             */
/*   Updated: 2022/07/03 19:38:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
    struct s_stack *prev;
    struct s_stack *next;
    int num;
} t_stack;

long long ft_atoi(const char *str);
void ft_putchar(char c);
void ft_putstr(char *str);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t destsize);
void ft_exception_three_b_to_a(t_stack **stack_a, t_stack **stack_b);
int ft_exit_three_b_to_a(t_stack **stack_a,
                         t_stack **stack_b, int count);
void ft_b_to_a(t_stack **stack_a, t_stack **stack_b, int count);
void ft_exception_three_a_to_b(t_stack **stack_a, t_stack **stack_b);
int ft_exit_three_to_b(t_stack **stack_a, t_stack **stack_b, int count);
void ft_a_to_b(t_stack **stack_a, t_stack **stack_b, int count);
void ft_sort_tab(int *tab, int size);
int ft_pivot(t_stack *stack, int count);
t_stack *ft_pop(t_stack **stack);
void ft_push(t_stack **stack, t_stack *node);
void ft_pa(t_stack **stack_a, t_stack **stack_b);
void ft_pb(t_stack **stack_a, t_stack **stack_b);
void ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void ft_sort_two(t_stack **stack);
void ft_sort_three(t_stack **stack);
int ft_min_num(t_stack *stack);
int ft_max_num(t_stack *stack);
int ft_check_double(t_stack *stack);
int ft_check_sorted_ascend(t_stack *stack, int count);
int ft_check_sorted_descend(t_stack *stack, int count);
void ft_descend_to_ascend(t_stack **stack_a, t_stack **stack_b);
void ft_rra(t_stack **stack_a);
void ft_rrb(t_stack **stack_b);
void ft_rrr(t_stack **stack_a, t_stack **stack_b);
void ft_sort_two(t_stack **stack);
void ft_ra(t_stack **stack_a);
void ft_rb(t_stack **stack_b);
void ft_rr(t_stack **stack_a, t_stack **stack_b);
void ft_stack_free(t_stack *stack);
void ft_sa(t_stack *stack_a);
void ft_sb(t_stack *stack_b);
void ft_print_node(t_stack *stack);
int ft_count_node(t_stack *stack);
t_stack *ft_new_node(int nbr);
void ft_init_stack(t_stack **stack, t_stack *new);
int ft_isdigit(char c);
int ft_string(char *str);
void find_duplicate(int argc, char *argv[]);
int is_ascending_order(int argc, char *argv[]);
void check_int_min_max(int argc, char *argv[]);
int ft_find_space(int argc, char *argv[]);
void ft_check_string(int argc, char *argv[]);
void ft_check(int argc, char *argv[]);
void ft_putchar(char c);
void ft_putstr(char *str);
size_t ft_strlen(const char *tr);
size_t ft_strlcpy(char *dest, const char *src, size_t destsize);
int ft_strcmp(char *s1, char *s2);
int ft_error_exit(char *str);

#endif