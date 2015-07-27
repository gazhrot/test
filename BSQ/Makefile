# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/27 11:21:00 by abruneau          #+#    #+#              #
#    Updated: 2015/07/27 11:55:27 by abruneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

INCLUDE = includes/bsq.h

SRCS = ft_function1.c ft_function2.c bsq.c

OBJET = ft_function1.o ft_function2.o bsq.o

all: $(NAME)
	@gcc -c $(SRCS) -I $(INCLUDE)
	@gcc -o $(NAME) $(OBJET)
	@echo "Great Job, BSQ is heeeeeere !"

clean:
	@rm -rf *.o
	@echo "All the objects files are now remove from this directory !"


fclean: clean
	@rm -rf $(NAME)
	@echo "BSQ take the road to Las Vegas !"

re: fclean all
	@echo "Cleaning and Remaking are just finish !"
