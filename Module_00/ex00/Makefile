# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 09:55:53 by pwolff            #+#    #+#              #
#    Updated: 2022/07/20 09:55:53 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		= megaphone

SRCS		= 	megaphone.cpp				


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
	@echo "$(RED)----------done------------$(RESET)"


%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@


clean:
	
	rm -rf $(OBJ)
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:		all clean fclean re 
