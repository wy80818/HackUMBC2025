TARGET = notAVirus

SRCS = main.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS =  

LDFLAGS = 

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)