/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:51:00 by sjo               #+#    #+#             */
/*   Updated: 2022/06/29 19:25:39 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_error_exit(char *str)
{
    ft_putstr(str);
    exit(1);
}

void find_duplicate(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
                ft_error_exit("Error \n");
            j++;
        }
        i++;
    }
}

int ft_digit_check(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void ft_check_string(char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        if (ft_strcmp(argv[i], " ") == 0 || ft_strcmp(argv[i], "") == 0 || ft_digit_check(argv[i]) == 0)
            ft_error_exit("Error \n");
        i++;
    }
}

void check_int_min_max(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
            ft_error_exit("Error \n");
        i++;
    }
}

void ft_check(int argc, char **argv)
{
    find_duplicate(argc, &*argv);
    ft_check_string(&*argv);
    check_int_min_max(argc, &*argv);
}