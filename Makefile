$(NAME)

all:
	clang -Wall -Wextra -Werror *.c *.h
clean:
	rm -rf a.out
fclean: 
	rm -rf a.out
re:
