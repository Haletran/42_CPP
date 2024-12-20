# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 09:55:24 by bapasqui          #+#    #+#              #
#    Updated: 2024/09/02 11:52:10 by bapasqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = btc
SRC = main.cpp BitcoinExchange.cpp Utils.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

data:
	@if [ -f data.csv ]; then echo "data.csv already exists"; else \
	wget https://cdn.intra.42.fr/document/document/27391/cpp_09.tgz; \
	tar -xvf cpp_09.tgz; \
	rm -f cpp_09.tgz && mv cpp_09/* data.csv && rm -rf cpp_09; \
	fi

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf data.csv

re: fclean all

.PHONY: all clean fclean re
