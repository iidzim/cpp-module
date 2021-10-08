# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 21:32:08 by iidzim            #+#    #+#              #
#    Updated: 2021/10/08 21:33:24 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

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