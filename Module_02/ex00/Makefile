# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 16:26:57 by pwolff            #+#    #+#              #
#    Updated: 2022/07/22 16:26:57 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

SRCS		= 	main.cpp	\
				Fixed.cpp

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
	$(CC) $(CC_FLAGS) -c $< -o $@
#	@printf	"\033[2K\r${BLU}[BUILD]${RST} '$<' $(END)"
#	@mkdir -p $(OBJS_DIR)srcsi

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

test:	all
	./${NAME}

.PHONY:		all clean fclean re test