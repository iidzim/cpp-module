# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:24:53 by iidzim            #+#    #+#              #
#    Updated: 2021/10/08 18:53:23 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScavTrap

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp

FLAGS	=	-Wall -Wextra -Werror

OBJS	= 	${SRCS:.cpp=.o}

all		:	$(NAME)

$(NAME)	:	$(SRC)
			@ clang++ $(SRC) $(FLAGS) -o $(NAME)

clean	:
			@ rm -rf $(OBJS)

fclean:		clean
			@ rm -rf $(NAME)

re:			fclean all

run:		re
			@ ./$(NAME)
