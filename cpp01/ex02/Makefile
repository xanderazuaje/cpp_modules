SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = zombie

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3
all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re