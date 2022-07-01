# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 19:16:19 by sjo               #+#    #+#              #
#    Updated: 2022/06/29 19:20:43 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c \
		  ft_a_to_b.c \
		  ft_b_to_a.c \
		  ft_check_stack.c \
		  ft_free.c \
		  ft_min_max_num.c \
		  ft_nodes.c \
		  ft_pa_pb.c \
		  ft_parsing.c \
		  ft_pivot.c \
		  ft_pop_push.c \
		  ft_ra_rb_rr.c \
		  ft_rra_rrb_rrr.c \
		  ft_sa_sb_ss.c \
		  ft_sort_four_five.c \
		  ft_sort_two_three.c \
		  ft_utils.c \

OBJS	= ${SRCS:.c=.o}

NAME	= push_swap

RM 		= rm -f

AR		= gcc 

.c.o:
		gcc -Wall -Wextra -Werror -g3 -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
		${AR} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} ${OBJS_B}

fclean:		clean
		${RM}	${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re