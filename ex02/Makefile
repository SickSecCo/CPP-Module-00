
NAME = 			dream
FLAGS = 		-Wall -Werror -Wextra -std=c++98 
COMPILE =		c++
RM =			rm -rf
SRC =			$(wildcard *cpp)
OBJ =			$(SRC:.cpp=.o)


all:	$(OBJ)
	$(COMPILE) $(FLAGS) $(OBJ) -o $(NAME) -g

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	clean all
				
.PHONY:	all clean fclean re