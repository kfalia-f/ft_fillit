# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 15:38:31 by kfalia-f          #+#    #+#              #
#    Updated: 2019/01/20 18:26:37 by kfalia-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

NAME = fillit

SRC = fillit.c \
	  ft_input.c \
	  ft_error.c \
	  ft_valid.c \
	  ft_recurs.c \
	  ft_alg.c \
	  ft_checkspot.c \
	  ft_clearspot.c \
	  ft_touch.c \
	  ft_newmap.c \
	  ft_output.c \
	  ft_coord.c

OBJ = $(SOURCE:.c=.o)

LIB = libft.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc $(CFLAGS) $(SRC) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
