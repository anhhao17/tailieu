CC=g++
CFLAGS=-g -Wall
target= cau2 cau3 cau4
all: $(target)
$(target) : %:%.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(target)