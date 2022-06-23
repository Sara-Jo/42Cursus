# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 15:06:20 by sjo               #+#    #+#              #
#    Updated: 2022/06/23 16:59:43 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SERVER = server
CLIENT = client
CC = cc
CFLAG = -Wall -Wextra -Werror
RM = rm -rf
SERVER_SRCS = server.c utils.c
CLIENT_SRCS = client.c utils.c
SERVER_OBJS = server.o utils.o
CLIENT_OBJS = client.o utils.o
SERVER_SRCS_BONUS = server_bonus.c utils_bonus.c
CLIENT_SRCS_BONUS = client_bonus.c utils_bonus.c
SERVER_OBJS_BONUS = server_bonus.o utils_bonus.o
CLIENT_OBJS_BONUS = client_bonus.o utils_bonus.o

ifdef MAKE_BONUS
	S_OBJ = $(SERVER_OBJS_BONUS)
	C_OBJ = $(CLIENT_OBJS_BONUS)
else
	S_OBJ = $(SERVER_OBJS)
	C_OBJ = $(CLIENT_OBJS)
endif

$(NAME) : $(SERVER) $(CLIENT)
all : $(NAME)

bonus :
	$(MAKE) MAKE_BONUS=1 all

$(SERVER) : $(S_OBJ)
	$(CC) $(CFLAG) -o $@ $^
$(CLIENT) : $(C_OBJ)
	$(CC) $(CFLAG) -o $@ $^

clean :
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS) $(SERVER_OBJS_BONUS) $(CLIENT_OBJS_BONUS)
	
fclean : clean
	$(RM) $(SERVER) $(CLIENT)

re : fclean all

.PHONY : all clean fclean re bonus