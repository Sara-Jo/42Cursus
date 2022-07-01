/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:56:57 by sjo               #+#    #+#             */
/*   Updated: 2022/06/29 19:26:15 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long long ft_atoi(const char *str)
{
    int signe;
    long long nb;

    signe = 1;
    nb = 0;
    while ((9 <= *str && *str <= 13) || *str == ' ')
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            signe = -signe;
        str++;
    }
    while ('0' <= *str && *str <= '9')
    {
        nb = nb * 10 + *str - '0';
        str++;
    }
    return (nb * signe);
}

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int ft_isdigit(char c)
{
    if ((c >= '0' && c <= '9') || c == '-')
        return (1);
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}