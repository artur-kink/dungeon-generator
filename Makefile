#Compiler
CC=g++
#Compiler flags
CFLAGS=-c -g -Wall -MMD -MP -MF 

#Archive
AR=ar
#Archive flags
LFLAGS=rvs

LFILE=libDgen.a

RM=rm -f

#Source files.
SOURCES=lib/MapGenerator.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all: lib example 

example: lib
	@echo ""
	@echo "Compiling example"
	$(CC) examples/example.cpp -I./lib -L. -lDgen -o example.out

lib: $(OBJECTS)
	@echo ""
	@echo "Creating library object"
	$(AR) $(LFLAGS) $(LFILE) $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	@echo ""
	@echo "Compiling $@"
	$(RM) $@.d
	$(CC) $(CFLAGS) $@.d -o $@ $<

clean: clean_examples
	$(RM) lib/*.o
	$(RM) lib/*.o.d
	$(RM) $(LFILE) 

clean_examples:
	$(RM) examples/*.o
	$(RM) examples/*.o.d
	$(RM) *.out
