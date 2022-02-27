NAME	=		weapon

CC		= 		c++
CFLAGS	= 		-Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC		=		main.cpp	HumanA.cpp		HumanB.cpp		Weapon.cpp\

OBJ		= 		$(SRC:%.cpp=%.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $^ -o $@
%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJ)

fclean: 		clean
				rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
