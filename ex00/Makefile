SOURCE	=	megaphone.cpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS=	-std=c++98

RM		=	rm -rf

NAME	=	megaphone

all: $(NAME)

$(NAME): $(SOURCE)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCE) -o $(NAME)
	@echo "megaphone compiled"

fclean:
	@$(RM) $(NAME)
