#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htrent <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 13:14:54 by htrent            #+#    #+#              #
#    Updated: 2019/08/18 21:12:06 by htrent           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = compile

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o eval_expr s*s/*.c

fclean: clean
	@/bin/rm -f eval_expr

clean:
	@/bin/rm -f *.o

re: fclean all

norm:
	@norminette