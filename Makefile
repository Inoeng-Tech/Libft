# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 09:48:15 by afridasufi        #+#    #+#              #
#    Updated: 2021/06/12 23:30:25 by afridasufi       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c \
							ft_bzero.c\
							ft_memcpy.c\
							ft_memccpy.c\
							ft_memmove.c\
							ft_memcmp.c\
							ft_memchr.c\
							ft_strlen.c\
							ft_strlcpy.c\
							ft_strlcat.c\
							ft_strchr.c\
							ft_strrchr.c\
							ft_strnstr.c\
							ft_strncmp.c\
							ft_atoi.c\
							ft_isalpha.c\
							ft_isdigit.c\
							ft_isalnum.c\
							ft_isascii.c\
							ft_isprint.c\
							ft_toupper.c\
							ft_tolower.c\
							ft_calloc.c\
							ft_strdup.c\
							ft_substr.c\
							ft_strjoin.c\
							ft_strtrim.c\
							ft_split.c\
							ft_itoa.c\
							ft_strmapi.c\
							ft_putchar_fd.c\
							ft_putstr_fd.c\
							ft_putendl_fd.c\
							ft_putnbr_fd.c\
							
OBJ					= $(FILES:%.c=%.o)

all: $(NAME)

#This won't run if tge .o files don't exist or are not modified
$(NAME): $(OBJ)
		ar rc $(NAME)	$(OBJ)

#this won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
		gcc -c $(CFLAGS) $(FILES)

clean:
		rm -f $(OBJ)
#comment this line if you don't want to remove the source files from the root

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
#use .PHONY to make sure that GNU make will still run even if files called
#clean / fclean / all and re already exist in the directory 