CC = gcc
CFLAGS = -W -Wall -Wextra
LDFLAGS = 
 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
OPUT = shell
 
all : $(OPUT) 
 
prog : $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean :
	@rm *.o
mrproper : clean
	@rm $(OPUT)
