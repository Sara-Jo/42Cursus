/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:52:51 by sjo               #+#    #+#             */
/*   Updated: 2022/02/07 13:05:27 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char_num(const char **str, va_list ap);
int		ft_printf_s(const char **str, va_list ap);
int		ft_write_null(void);
int		ft_printf_percent(const char **str);
int		ft_printf_hex(const char **str, va_list ap);
int		ft_printf_p(const char **str, va_list ap);
int		ft_printf_di(const char **str, va_list ap);
int		ft_printf_u(const char **str, va_list ap);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int		ft_putnbr(size_t nbr, char *base);
size_t	ft_strlen(const char *s);

#endif
