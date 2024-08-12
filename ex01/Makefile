SRCS = PhoneBook.cpp Contact.cpp main.cpp
NAME = cpp
CC = c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

all: $(NAME)

$(NAME): $(SRCS) 
	$(CC) $(SRCS) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all