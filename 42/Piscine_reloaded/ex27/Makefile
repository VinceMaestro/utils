# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpetit <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 21:24:23 by vpetit            #+#    #+#              #
#    Updated: 2016/11/23 20:15:31 by vpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC_DIR = ./sources

INCL_DIR = ./includes

SRC = ft_display_file ft_print_error ft_putchar  main

INCL = lib_ft_display_file

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(elems) $(foreach element,$(SRC), \
		$(SRC_DIR)/$(element).c) -I$(elems) $(foreach element,$(INCL), \
			$(INCL_DIR)/$(element).h)  
	@gcc -Wall -Werror -Wextra $(elems) $(foreach element,$(SRC), \
		$(element).o) -o $(NAME)

clean:
	@/bin/rm -f $(elems) $(foreach element,$(SRC), $(element).o)

fclean: clean
	@/bin/rm -f $(NAME)
