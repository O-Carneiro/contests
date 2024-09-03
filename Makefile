# Makefile

# Wildcard pattern to find all .cpp files in the current directory
SOURCES := $(wildcard *.cpp)

# Targets: converting each .cpp file to an executable by removing the .cpp extension
TARGETS := $(SOURCES:.cpp=)

# Default rule to build all executables
all: $(TARGETS)

# Rule to compile each .cpp file into an executable
%: %.cpp
	g++ -o $@ $<

# Clean rule to delete executables in child directories only
clean:
	find . -mindepth 2 -type f -executable -exec rm -f {} +

# Clean_local rule to delete executables in the current directory only
clean_local:
	find . -maxdepth 1 -type f -executable -exec rm -f {} +

# Phony targets to prevent conflicts with files named 'all', 'clean', or 'clean_local'
.PHONY: all clean clean_local

