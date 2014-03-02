# Simple build script from: http://mrbook.org/tutorials/make/
# for a more detailed guide: http://felixcrux.com/blog/creating-basic-makefile

CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=cee.c game_state.c player.c player_report.c
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=cee

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -f $(EXECUTABLE)
