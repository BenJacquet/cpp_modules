NAME = PhoneBook

SRCS =  srcs/main.cpp \
		srcs/PhoneBook.class.cpp \
		srcs/Contact.class.cpp

INCS =  incs/PhoneBook.class.hpp \
		incs/Contact.class.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

srcs/main.o : $(INCS)

$(OBJS) : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re