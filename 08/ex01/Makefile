# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 21:25:04 by jchu              #+#    #+#              #
#    Updated: 2023/04/28 23:25:02 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= span

SRCS		= main.cpp Span.cpp

AR_NAME		= span.a

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