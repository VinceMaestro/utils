# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 21:24:23 by vpetit            #+#    #+#              #
#    Updated: 2016/12/21 18:37:30 by vpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = .

INCL_DIR = .

SRC = ft_atoi \
		ft_bzero \
		ft_isalnum \
		ft_isalpha \
		ft_isdigit \
		ft_isprint \
		ft_lstadd \
		ft_lstdel \
		ft_lstdelone \
		ft_lstiter \
		ft_lstmap \
		ft_lstnew \
		ft_memalloc \
		ft_memccpy \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memdel \
		ft_memmove \
		ft_memset \
		ft_putchar \
		ft_putchar_fd \
		ft_putendl \
		ft_putendl_fd \
		ft_putnbr \
		ft_putnbr_fd \
		ft_putstr \
		ft_putstr_fd \
		ft_range \
		ft_sqrt \
		ft_strcat \
		ft_strchr \
		ft_strcmp \
		ft_strcpy \
		ft_strdel \
		ft_strdup \
		ft_strendl \
		ft_strlcat \
		ft_strlen \
		ft_strncat \
		ft_strncmp \
		ft_strncpy \
		ft_strnew \
		ft_strrchr \
		ft_strstr \
		ft_tolower \
		ft_toupper

INCL = libft

all: $(NAME)

$(NAME): $(foreach element,$(SRC), $(SRC_DIR)/$(element).c)
	gcc -Wall -Werror -Wextra -c $^ -I$(INCL_DIR)
	ar -rc $@ $(foreach element,$(SRC), $(element).o)

clean:
	@/bin/rm -f $(foreach element,$(SRC), $(element).o)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
