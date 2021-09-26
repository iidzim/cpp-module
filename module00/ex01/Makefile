# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 17:49:46 by iidzim            #+#    #+#              #
#    Updated: 2021/09/26 10:51:33 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRC		=	phonebook.cpp contact.cpp

FLAGS	=	-Wall -Wextra -Werror -fsanitize=address

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
