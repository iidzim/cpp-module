# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 16:06:28 by iidzim            #+#    #+#              #
#    Updated: 2021/10/12 12:16:53 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Intern

SRC		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
