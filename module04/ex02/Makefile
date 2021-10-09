# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 13:12:11 by iidzim            #+#    #+#              #
#    Updated: 2021/10/09 13:15:56 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02

SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

FLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRC:.cpp=.o}

all		:	$(NAME)

$(NAME)	:	$(SRC)
			@ clang++ $(SRC) $(FLAGS) -o $(NAME)

clean	:
			@ rm -rf $(OBJS)

fclean	:	clean
			@ rm -rf $(NAME)

re		:	fclean all

run		:	re
			@ ./$(NAME)