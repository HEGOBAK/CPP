# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 02:49:21 by jchu              #+#    #+#              #
#    Updated: 2023/05/03 18:45:30 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PmergeMe

SRCS		= main.cpp PmergeMe.cpp

AR_NAME		= PmergeMe.a

OBJS		= $(SRCS:%.cpp=%.o)

CC			= c++

AR			= ar rc

FLAGS		= -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	$(AR) $(AR_NAME) $(OBJS)
	rm -f $(OBJS)
 
all: $(NAME)

clean:
	rm -f $(AR_NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PONY: all clean fclean re