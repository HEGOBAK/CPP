# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 07:17:17 by jchu              #+#    #+#              #
#    Updated: 2023/04/18 08:14:58 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:%.cpp=%.o)

CC			= c++

FLAGS		= -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
 
all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PONY: all clean fclean re