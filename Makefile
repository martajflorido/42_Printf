# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:12:32 by martjim2          #+#    #+#              #
#    Updated: 2024/05/02 17:42:00 by martjim2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
FILES = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_putnbr_hexa_lowercase_fd.c ft_putnbr_hexa_uppercase_fd.c ft_putpointer.c \
ft_unsign_putnbr_fd.c

OBJECTS = $(FILES:.c=.o)

%.o : %.c
	gcc $(FLAGS) -c $^ -o $@

$(NAME) : $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all : $(NAME)

clean:
	rm -f *.o

fclean :
	rm -f *.o $(NAME)

re : fclean all

.PHONY : all clean fclean re
