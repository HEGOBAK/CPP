# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 17:00:54 by jchu              #+#    #+#              #
#    Updated: 2023/04/18 17:17:21 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

SRCS		= main.cpp Replace.cpp

AR_NAME		= replace.a

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
	rm -f $(AR_NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PONY: all clean fclean re