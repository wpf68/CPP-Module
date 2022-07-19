# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 09:24:14 by pwolff            #+#    #+#              #
#    Updated: 2022/06/29 10:29:34 by mfuhrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Unnecessary_violence

SRCS		= 	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp

OBJ		= $(SRCS:.cpp=.o)
CC		= g++
#CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RED	=	\033[1;31m
YELLOW	=	\033[1;33m
RESET	=	\033[0m

all: $(NAME)
	@echo "$(RED)----------done------------$(RESET)"

$(NAME): $(SRCS) $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 


%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@


clean:
	
	rm -rf $(OBJ)
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:		all clean fclean re 
