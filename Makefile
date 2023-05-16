NAME=push_swap
CFLAGS=-Wall -Wextra
CC=cc
SRC=main.c project_logic/*.c validators/*.c utils/*.c

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(NAME) 

clean:
	rm -f $(NAME)