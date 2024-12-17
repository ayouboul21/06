# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 11:56:13 by aoulahra          #+#    #+#              #
#    Updated: 2024/12/12 11:56:14 by aoulahra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)

NAME = convert
CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ScalarConverter.hpp

all: ${NAME}

${NAME}: $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o ${NAME} $(OBJ)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean