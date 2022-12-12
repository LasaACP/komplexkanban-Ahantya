SHELL = /bin/sh

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := $(wildcard src/*.cpp)
SRCS := $(filter-out catch_amalgamated.cpp, $(SRCS))
TESTS := $(wildcard *.cpp)
TESTS := $(filter-out catch_amalgamated.cpp, $(TESTS))
HEADERS := $(wildcard *.h*)
HEADERS := $(filter-out catch_amalgamated.hpp, $(TESTS))

main: $(TESTS) ../include/Complex.h $(HEADERS)
	$(CXX) $(CXXFLAGS) complasa_runner.cpp -o "#@"


main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

catch_amalgamated: ../tests/catch_amalgamated.cpp ../tests/catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -O0 -c ../tests/catch_amalgamated.cpp -o "$@"

clean:
	rm -f main main-debug

all:
	catch_amalgamated
	main