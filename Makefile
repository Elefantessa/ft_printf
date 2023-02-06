# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halramli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 15:47:31 by halramli          #+#    #+#              #
#    Updated: 2023/02/06 15:47:51 by halramli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
		ft_put_p_printf.c \
		ft_put_u_nbr_printf.c \
		ft_putchar_printf.c \
		ft_putnbr_printf.c \
		ft_putnbr_x_printf.c \
		ft_putstr_printf.c
		


OBJS	= ${SRCS:.c=.o}

NAME	=  libftprintf.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

LIB_PATH = libft/

DEP = libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${DEP}	${OBJS}
		ar rcs ${NAME} ${OBJS}
${DEP}:
	(cd ${LIB_PATH}; make all)
	mv ${LIB_PATH}${DEP} ${NAME}

all :	${NAME}

clean:
	(cd ${LIB_PATH}; make fclean)
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
