#include "arghandler.h"

void handle_args(int argc, char **argv) {
    if (argc != 3) {
        printf("Incorrect arguments! Usage: ./main <directory_path> <filename>\n");
        exit(-1);
    }
}