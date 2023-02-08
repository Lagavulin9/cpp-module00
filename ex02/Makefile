NAME = Account
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRC = tests.cpp \
	Account.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%o: %cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re