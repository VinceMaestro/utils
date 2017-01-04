# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mads <Mads@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/03 01:39:02 by Mads              #+#    #+#              #
#    Updated: 2017/01/03 01:57:45 by Mads             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_DIR = .

SRC = main.c

OBJ = $(foreach element $(SRC), $(SRC_DIR)/$(element).o)

INCL_DIR = .

all: $(NAME)

$(NAME): $(foreach element $(SRC), $(SRC_DIR)/$(element).c)
	@gcc -Wall -Werror -Wextra -c $^ -I $(INCL_DIR)
	@ar -rc $@ $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	 @/bin/rm -f $(NAME)

re: fclean all
