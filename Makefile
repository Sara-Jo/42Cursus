# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 15:06:20 by sjo               #+#    #+#              #
#    Updated: 2022/06/23 02:04:20 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

SRCS_SERVER = server.c \
			  utils.c \


SRCS_CLIENT = client.c \
			  utils.c \


OBJS_SERVER = ${SRCS_SERVER:.c=.o}
OBJS_CLIENT = ${SRCS_CLIENT:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

all: ${SERVER} ${CLIENT}

${SERVER}: ${OBJS_SERVER}
	@${CC} ${OBJS_SERVER} ${CFLAGS} -o ${SERVER} -I.

${CLIENT}: ${OBJS_CLIENT}
	@${CC} ${OBJS_CLIENT} ${CFLAGS} -o ${CLIENT} -I.

clean:
	@${RM} ${OBJS_SERVER}
	@${RM} ${OBJS_CLIENT}

fclean: clean
	@${RM} ${SERVER}
	@${RM} ${CLIENT}

re: fclean all

.PHONY: clean fclean re all
