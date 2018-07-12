
NAME = RoverUnitTests

SRCS = \
	Engine.cpp \
	AtmosphereRegulator.cpp \
	Oxygenator.cpp \
	WaterReclaimer.cpp \
	RoverUnitTests.cpp \
	Errors.cpp \
	BaseComponent.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -W -Wall -Werror

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@./$(NAME)

