# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 13:24:29 by ejanssen          #+#    #+#              #
#    Updated: 2022/10/24 13:36:09 by ejanssen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C 				= gcc
CFLAGS 			= -Wall -Werror -Wextra
SRC 			= ft_isalpha.c
SRC				+= ft_isdigit.c
SRC				+= ft_isalnum.c
SRC				+= ft_isascii.c
SRC				+= ft_isprint.c
SRC				+= ft_strlen.c
SRC				+= ft_memset.c
SRC				+= ft_memcpy.c
SRC				+= ft_memmove.c
SRC				+= ft_bzero.c
SRC				+= ft_strlcpy.c
SRC				+= ft_strlcat.c
SRC				+= ft_toupper.c
SRC				+= ft_tolower.c
SRC				+= ft_strchr.c
SRC				+= ft_strncmp.c
SRC				+= ft_memchr.c
SRC				+= ft_memcmp.c
SRC				+= ft_strnstr.c
SRC				+= ft_atoi.c
SRC				+= ft_calloc.c
SRC				+= ft_strdup.c

DEPENDENCIES 	= libft.h
OBJECTS				= $(SRC:.c=.o)
LIB				= libft.a

.PHONY: all
all: $(LIB)

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $< $(INC)

.PHONY: $(LIB)
$(LIB): $(OBJECTS)
	ar r $@ $^

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(LIB)

.PHONY: re
re : fclean all