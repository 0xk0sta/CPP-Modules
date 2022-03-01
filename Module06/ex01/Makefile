NAME	=		data

CC		= 		c++
CFLAGS	= 		-Wall -Wextra -Werror -std=c++98 --pedantic -MD

SRC		=		main.cpp

OBJ		= 		$(SRC:%.cpp=%.o)

DEP		=		$(SRC:%.cpp=%.d)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $^ -o $@
%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJ) $(DEP)

fclean: 		clean
				rm -rf $(NAME)

-include $(DEP)

re: fclean all

.PHONY: all re clean fclean
