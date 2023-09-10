SOURCE	=	main.cpp Contact.cpp Phonebook.cpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS=	-std=c++98

RM		=	rm -rf

NAME	=	phonebook

all: $(NAME)

$(NAME): $(SOURCE)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCE) -o $(NAME)
	@echo "$(NAME) compiled"

fclean:
	@$(RM) $(NAME)
