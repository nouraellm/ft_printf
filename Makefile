# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-alla <nel-alla@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/17 08:12:50 by nel-alla          #+#    #+#              #
#    Updated: 2020/01/21 08:27:28 by nel-alla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c \
		srcs/ft_handle_char.c \
		srcs/ft_handle_flags.c \
		srcs/ft_handle_hex.c \
		srcs/ft_handle_int.c \
		srcs/ft_handle_percent.c \
		srcs/ft_handle_pointer.c \
		srcs/ft_handle_string.c \
		srcs/ft_handle_uint.c \
		srcs/ft_handle_width.c \
		srcs/ft_handle.c \
		helpers/ft_isdigit.c \
		helpers/ft_itoa.c \
		helpers/ft_u_itoa.c \
		helpers/ft_putchar.c \
		helpers/ft_putsp.c \
		helpers/ft_str_tolower.c \
		helpers/ft_strdup.c \
		helpers/ft_strlen.c \
		helpers/ft_tolower.c \
		helpers/ft_utl_base.c 

OBJECTS = ft_printf.o \
		ft_handle_char.o \
		ft_handle_flags.o \
		ft_handle_hex.o \
		ft_handle_int.o \
		ft_handle_percent.o \
		ft_handle_pointer.o \
		ft_handle_string.o \
		ft_handle_uint.o \
		ft_handle_width.o \
		ft_handle.o \
		ft_isdigit.o \
		ft_itoa.o \
		ft_u_itoa.o \
		ft_putchar.o \
		ft_putsp.o \
		ft_str_tolower.o \
		ft_strdup.o \
		ft_strlen.o \
		ft_tolower.o \
		ft_utl_base.o

INCLUDES = inc/ft_printf.h


all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SRCS) $(INCLUDES)
	@gcc -Wextra -Werror -Wall -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
bonus: