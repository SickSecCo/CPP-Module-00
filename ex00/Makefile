NAME = 			megaphone
FLAGS = 		-Wall -Werror -Wextra -std=c++98
COMPILE =		c++
FILE =			$(wildcard *.cpp)
RM =			rm -rf


all:
	$(COMPILE) $(FLAGS) $(FILE) -o $(NAME)

clean:
	$(RM) $(NAME)

re:	clean all

.PHONY:	all clean re
