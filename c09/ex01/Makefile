NAME = libft.a
FILES = $(wildcard srcs/*.c)
OBJECTS = $(FILES:.c=.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -I includes -c -o $@ $<

$(NAME): $(OBJECTS)
	cc -shared $(FLAGS) -o $(NAME) $(OBJECTS)
all: $(NAME)

clean: 
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
