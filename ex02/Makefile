# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 20:47:08 by dolifero          #+#    #+#              #
#    Updated: 2024/09/23 13:29:23 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FragClapTrap
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

SRC_FILES	= ClapTrap.cpp FragTrap.cpp main.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ_FILES)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ_FILES)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

