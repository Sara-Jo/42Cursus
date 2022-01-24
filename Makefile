SRCS	= ft_printf.c ft_printf_utils.c ft_printf_diu.c ft_printf_string.c ft_printf_hex.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a 

RM 		= rm -f

AR		= ar rc

.c.o:
		gcc -Wall -Wextra -Werror -g3 -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} ${OBJS_B}

fclean:		clean
		${RM}	${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re
