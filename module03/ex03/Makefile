# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 16:52:21 by iidzim            #+#    #+#              #
#    Updated: 2021/10/08 21:33:45 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	DimaondTrap

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

FLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow

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