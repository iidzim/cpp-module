# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 16:15:58 by iidzim            #+#    #+#              #
#    Updated: 2021/10/08 21:33:55 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	FragTrap

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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