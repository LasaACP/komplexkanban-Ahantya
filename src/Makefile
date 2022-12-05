SHELL = /bin/sh

all: main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

#SRCS := $(wildcard *.cpp)
#SRCS := $(filter-out catch_amalgamated.cpp, $(SRCS))

HEADERS := $(wildcard *.h*)
HEADERS := $(filter-out catch_amalgamated.hpp, $(TESTS))

main: Main.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) Main.cpp fac.cpp -I ../include  -o "$@"


main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

catch_amalgamated: catch_amalgamated.cpp catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamated.cpp -o "$@"

clean:
	rm -f main main-debug
