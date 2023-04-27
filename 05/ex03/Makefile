# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 18:32:37 by jchu              #+#    #+#              #
#    Updated: 2023/04/26 23:57:35 by jchu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat03

SRCS		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

AR_NAME		= bureaucrat03.a

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