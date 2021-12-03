/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:51:48 by sjo               #+#    #+#             */
/*   Updated: 2021/12/02 17:21:43 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list 
{
    void            *content;
    struct s_list   *next; 
}                   t_list;

void      *ft_memset(void *dest, int c, size_t n);
void      ft_bzero(void *b, size_t n);
void	  *ft_memcpy(void *dest, const void *src, size_t n);
void	  *ft_memccpy(void *dest, const void *src, int c, size_t n);
void	  *ft_memmove(void *dest, const void *src, size_t n);
void	  *ft_memchr(const void *b, int c, size_t n);
int		  ft_memcmp(const void *b1, const void *b2, size_t n);
int		  ft_strlen(const char *s);
size_t    ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t    ft_strlcat(char *dest, const char *src, size_t dstsize);
char	  *ft_strchr(const char *s, int c);
char      *ft_strrchr(const char *s, int c);
char	  *ft_strnstr(const char *big, const char *little, size_t len);
int		  ft_strcmp(const char *s1, const char *s2);
int		  ft_strncmp(const char *s1, const char *s2, size_t n);
int		  ft_atoi(const char *str);
int		  ft_isalpha(int c);
int		  ft_isdigit(int c);
int		  ft_isalnum(int c);
int		  ft_isascii(int c);
int		  ft_isprint(int c);
int		  ft_toupper(int c);
int		  ft_tolower(int c);
void	  *ft_calloc(size_t nmemb, size_t size);
char	  *ft_strdup(const char *str);

#endif