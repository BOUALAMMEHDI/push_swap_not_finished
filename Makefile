# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 23:41:45 by mboualam          #+#    #+#              #
#    Updated: 2022/09/29 04:15:54 by mboualam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME  = push_swap

CC  = gcc

FLAGS = -Wall -Wextra -Werror  
# -fsanitize=address -g
SRCS = checker.c \
	   main.c \
	   utils_1.c \
	   utils_2_op.c \
	   utils_3.c \
	   op_1.c \
	   op_2.c \
	   sort_2_3_4_5.c \
	   sort_100_500.c \
	   sort_.c \
	   put_in_top.c \
	   min.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :  $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[32m=>\033[0mCOMPILE........................"
	@echo "waiting"
	@echo "."
	@sleep 0.10s
	@echo "."
	@sleep 0.10s
	@echo "."
	@sleep 0.10s
	@echo "."
	@sleep 0.10s
	@echo "."
	@echo "\033[32m=>\033[0m.exe is  \033[32m./push_swap\033[0m"
	@echo "[\033[32mDONE\033[0m]"

clean :
	@rm -rf $(OBJS)
	@echo "\033[31m=>\033[0m[DELETED.........................][\033[31mDONE\033[0m]"
fclean : clean
	@rm -rf $(NAME)
re : fclean all

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<
