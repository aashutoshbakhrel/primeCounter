CC=gcc

CFLAGS=-Wall -Wextra -std=c17


SRC=src/main.c src/prime.c

TARGET=prime-counter



all:
	$(CC) $(CFLAGS) $(SRC) -lm -o $(TARGET)



test:
	$(CC) $(CFLAGS) tests/test_prime.c src/prime.c -lm -o test_runner
	./test_runner



clean:
	rm -f $(TARGET)
	rm -f test_runner
