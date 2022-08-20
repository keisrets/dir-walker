build:
	gcc main.c headers/arghandler.c headers/dirwalker.c -Wall -o main

clean:
	rm main
	gcc main.c headers/arghandler.c headers/dirwalker.c -Wall -o main