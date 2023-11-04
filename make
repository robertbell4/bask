
# manual windows command line input : 
# g++ -o game main.cpp
# ./game.exe

# Define the C++ compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Define any directories containing header files other than /usr/include
INCLUDES =

# Define library paths in addition to /usr/lib
LFLAGS =

# Define any libraries to link into executable
LIBS =

# Define the C++ source files
SRCS = main.cpp # Car.cpp Engine.cpp

# Define the C++ header files
HEADERS =    #Car.hpp Engine.hpp

# Define the object files 
OBJS = $(SRCS:.cpp=.o)

# Define the name of the executable
MAIN = game

.PHONY: depend clean

all:    $(MAIN)
	@echo  Compiled $(MAIN) successfully!

# This is the linking step
$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# This is the compilation step
.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
