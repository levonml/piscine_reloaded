# -*- Makefile -*-

NAME = libft.a
CFILES = srcs/*.c
OFILES = *.o
GFLAGS = gcc -Wall -Wextra -Werror
INQLUDES = includes

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)
$(OFILES) : $(CFILES) $(INQLUDES)
	$(GFLAGS) -c $(CFILES) -I $(INQLUDES)
clean :
	rm -f $(OFILES) *~
fclean : clean
	rm -f $(NAME)
re : clean
	make

