# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 17:23:47 by pwolff            #+#    #+#              #
#    Updated: 2022/07/21 17:23:47 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Sed_is_for_losers

SRCS		= 	main.cpp						\
				create_filename_replace.cpp		\
				create_strings.cpp

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
	./Sed_is_for_losers .test "**test**" "___A___" 

.PHONY:		all clean fclean re test