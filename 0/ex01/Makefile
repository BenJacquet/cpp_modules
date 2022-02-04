NAME = PhoneBook

SRCS =  main.cpp \
		PhoneBook.class.cpp \
		Contact.class.cpp

INCS =  PhoneBook.class.hpp \
		Contact.class.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

main.o : $(INCS)

$(OBJS) : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re