# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 14:49:07 by jchu              #+#    #+#              #
#    Updated: 2023/05/02 14:53:18 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bitcoin

SRCS		= main.cpp BitcoinExchange.cpp

AR_NAME		= bitcoin.a

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