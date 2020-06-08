#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/04 13:47:13 by lstepany          #+#    #+#              #
#    Updated: 2020/06/04 13:47:38 by lstepany         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# -*- Makefile -*-

NAME = libft.a
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
GFLAGS = gcc -Wall -Wextra -Werror
INQLUDES = includes

all :$(NAME)
$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)
$(OFILES) : $(CFILES) $(INQLUDES)
	$(GFLAGS) -c $(CFILES) -I $(INQLUDES)
clean :
	rm -f $(OFILES) *~
fclean : clean
	rm -f $(NAME)
re : fclean
	make

