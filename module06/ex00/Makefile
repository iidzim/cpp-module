# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 11:42:43 by iidzim            #+#    #+#              #
#    Updated: 2021/10/18 11:30:06 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScalarConversion

SRC		=	main.cpp

OBJ		=	${SRC:.cpp=.o}

FLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:	$(SRC)
			@ clang++ $(SRC) $(FLAGS) -o $(NAME)

clean	:
			@ rm -rf $(OBJ)

fclean	:	clean
			@ rm -rf $(NAME)

re		:	fclean all