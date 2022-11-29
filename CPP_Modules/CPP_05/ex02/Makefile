# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 22:59:43 by sjo               #+#    #+#              #
#    Updated: 2022/11/29 23:00:03 by sjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex02

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp\
	   Bureaucrat.cpp\
	   Form.cpp\
	   ShrubberyCreationForm.cpp\
	   RobotomyRequestForm.cpp\
	   PresidentialPardonForm.cpp\


OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS)
	rm -f $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re