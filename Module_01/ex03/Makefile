# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 11:04:37 by pwolff            #+#    #+#              #
#    Updated: 2022/07/20 11:04:37 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Unnecessary_violence

SRCS		= 	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp

OBJS				= $(SRCS:.cpp=.o)
OBJS_DIR			= objs/
OBJECTS_PREFIXED 	= $(addprefix $(OBJS_DIR), $(OBJS))

CC		= g++
#CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RED	=	\033[1;31m
YELLOW	=	\033[1;33m
RESET	=	\033[0m

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(OBJS_DIR)
#	@mkdir -p $(OBJS_DIR)srcs
	$(CC) $(CC_FLAGS) -c $< -o $@
#	@printf	"\033[2K\r${BLU}[BUILD]${RST} '$<' $(END)"

all: $(NAME)
	@echo "$(RED)----------done------------$(RESET)"

$(NAME): $(SRCS) $(OBJECTS_PREFIXED)
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(FLAGS)

clean:
	rm -rf $(OBJS_DIR)
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:		all clean fclean re 
