# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 16:06:28 by iidzim            #+#    #+#              #
#    Updated: 2021/10/11 19:21:30 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Forms

SRC		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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
