NAME=push_swap
CFLAGS=-Wall -Wextra -Werror
CC=cc
SRC=main.c helper_functions/*.c

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(NAME) 

clean:
	rm -f $(NAME)