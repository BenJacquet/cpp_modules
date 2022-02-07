NAME = internship

SRCS = main.cpp\
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp

INCS = Bureaucrat.hpp\
		Form.hpp\
		ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp\
		PresidentialPardonForm.hpp\
		Intern.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	rm -rf shrubbery

re : fclean all

.PHONY : all clean fclean re