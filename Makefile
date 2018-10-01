# Makefile for Lecture 5 example program
# modify if runnng on PC (change comments where needed)
#
TARGET	= starname
#TARGET	= example.exe

RM		= rm -f
#RM		= del

FILES 	= main.cpp utilities.cpp

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
