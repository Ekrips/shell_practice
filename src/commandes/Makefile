CC = gcc
CFLAGS =  -Wall -Wextra -Wundef -Wshadow -Wpointer-arith -Wunreachable-code -Wconversion -Wswitch-enum -Wswitch-default -Wcast-qual -Wformat=2
LDFLAGS =
SRC = $(wildcard *.cpp)
OBJS = $(SRC:.cpp=.o)
AOUT = date
 
all : $(AOUT) 
 
main : $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean :
	@rm *.o
mrproper : clean
	@rm $(AOUT)
