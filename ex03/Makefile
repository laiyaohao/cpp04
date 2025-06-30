NAME := ex03
CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRC := AMateria.cpp Character.cpp Ice.cpp Cure.cpp  MateriaSource.cpp main.cpp 
OBJ := ${SRC:.cpp=.o}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: all clean fclean re