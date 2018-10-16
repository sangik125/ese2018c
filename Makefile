CFLAGS = -Wall
OBJS = func1.o myapp.o func2.o
TARGET = myapp

$(TARGET): $(OBJS)
	gcc -o $(TARGET) $(OBJS)

%.o : %.c
	gcc -c $(CFALGS) $< -o $@

clean : 
	rm -f $(TARGET) $(OBJS)
