# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 11:15:35 by bclaeys           #+#    #+#              #
#    Updated: 2024/05/28 16:33:31 by bclaeys          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a 
TESTFILE=test
CODEDIRS=.
INCDIRS=.
CFILES=ft_format.c ft_printf.c ftpr_putchar.c ftpr_puthex.c ftpr_putint.c ftpr_putstr.c ftpr_putptr.c ftpr_putunsdec.c

OPT=-O0
CC=cc
CFLAGS=-Wall -Wextra -Werror -g
OBJECTS=$(patsubst %.c,%.o,$(CFILES))

all: $(NAME)
	
$(NAME): $(OBJECTS)
	@ar rcs $@ $^
	@echo "Making libft.a"
	@echo "\033[33mArchive library libft.a created.\033[0m"

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<
# < Verwijst maar naar een enkele dependency.

test: $(NAME)
	$(CC) $(CFLAGS) -lbsd -o $(TESTFILE) $^
	@echo "\033[33mTest file created.\033[0m"
	@echo "\033[33mTest output:\033[0m"
	@eval ./test
	
clean:
	@rm -f $(OBJECTS) $(DEPFILES) $(TESTFILE)
	@echo "\033[33mAll object files, dependency files and test files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[33mArchive library removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re test
