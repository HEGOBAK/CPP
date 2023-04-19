# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 01:40:30 by jchu              #+#    #+#              #
#    Updated: 2023/04/20 02:08:32 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= claptrap

SRCS		= main.cpp ClapTrap.cpp

AR_NAME		= claptrap.a

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