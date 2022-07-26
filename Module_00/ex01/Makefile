# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 18:56:09 by pwolff            #+#    #+#              #
#    Updated: 2022/07/26 18:56:09 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phone_book

SRCS		= 	main.cpp		\
			Contact_Class.cpp	\
			PhoneBook_Class.cpp			


OBJ		= $(SRCS:.cpp=.o)
CC		= g++
#CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RED	=	\033[1;31m
YELLOW	=	\033[1;33m
RESET	=	\033[0m

all: $(NAME)
	

$(NAME): $(SRCS) $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 
	@echo "$(YELLOW)----------done------------$(RESET)"


%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@


clean:
	
	rm -rf $(OBJ)
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

test:	all
	./${NAME}

.PHONY:		all clean fclean re test
