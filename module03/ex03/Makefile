# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 16:52:21 by iidzim            #+#    #+#              #
#    Updated: 2021/10/05 16:52:51 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	DimaondTrap

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAGS	=	-Wall -Wextra -Werror

OBJS	= 	${SRCS:.cpp=.o}

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			@ clang++ $(SRC) $(FLAGS) -o $(NAME)

clean	:
			@ rm -rf $(OBJS)

fclean:		clean
			@ rm -rf $(NAME)

re:			fclean all

run:		re
			@ ./$(NAME)