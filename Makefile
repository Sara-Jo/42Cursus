# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 17:56:35 by sjo               #+#    #+#              #
#    Updated: 2022/01/25 15:51:27 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc
CFLAG	      = -Wall -Wextra -Werror

RM		= rm -f

AR		= ar
ARFLAGS       = crs

SRCS	= ft_printf.c ft_printf_utils.c ft_printf_diu.c ft_printf_string.c ft_printf_hex.c	

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

all : $(NAME)

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

 .PHONY : all bonus clean fclean re