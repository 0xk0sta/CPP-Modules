NAME = megaphone

CC		= 		c++
CFLAGS	= 		-Wall -Wextra -Werror -std=c++98

//SRCD	=		srcs

SRC		=		megaphone.cpp 				\

OBJ		= 		$(SRC:%.cpp=%.o)

#SRCS	= 		$(addprefix srcs/, $(SRC))

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $^ -o $@

$(OBJ):			$(SRC)
				$(CC) $(CFLAGS) -c $^ -o $@

clean:
				rm -rf $(OBJ)

fclean: clean
				rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
