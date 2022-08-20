build:
	gcc main.c headers/arghandler.c -Wall -o main

clean:
	rm main
	gcc main.c headers/arghandler.c -Wall -o main