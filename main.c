#include <stdio.h>
#include "headers/arghandler.h"
#include "headers/dirwalker.h"

int main(int argc, char **argv) {

    handle_args(argc, argv);

    char *path = malloc(1024);
    getcwd(path, 1024);

    DIR *dr = opendir(path);

    find_file(dr, path, argv[2]);

    printf("File not found\n");
    
    return 0;
}