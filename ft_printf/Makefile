# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 17:56:35 by sjo               #+#    #+#              #
#    Updated: 2022/02/07 15:24:02 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc
CFLAG	    = -Wall -Wextra -Werror

RM			= rm -f

AR			= ar
ARFLAGS     = crs

SRCS		= ft_printf.c ft_printf_utils.c ft_printf_diu.c ft_printf_string.c ft_printf_hex.c	

OBJS		= $(SRCS:.c=.o)

all : $(NAME)

${NAME}:	${OBJS}
		${AR} ${ARFLAGS} ${NAME} ${OBJS}

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

 .PHONY : all clean fclean re
