# Compiler
CC = g++
# Compiler flags
CFLAGS = -std=c++11 -Wall
# Source files
SRCS = main.cpp Animal.cpp Aerial.cpp Aquatic.cpp Mammal.cpp Dog.cpp Lion.cpp Cat.cpp Eagle.cpp Owl.cpp Hummingbird.cpp Frog.cpp Whale.cpp Shark.cpp
# Object files
OBJS = $(SRCS:.cpp=.o)
# Executable name
TARGET = myprogram
# Build rule
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
# Object file rule
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)