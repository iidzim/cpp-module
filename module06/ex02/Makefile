# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/17 18:41:43 by iidzim            #+#    #+#              #
#    Updated: 2021/10/17 18:42:04 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	dynamic_cast

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

run		:	re
			@ ./$(NAME)