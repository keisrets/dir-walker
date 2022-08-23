#include <stdio.h>
#include <linux/limits.h>
#include "headers/arghandler.h"
#include "headers/dirwalker.h"

int main(int argc, char **argv) {

    handle_args(argc, argv);

    char path[PATH_MAX];

    if (strcmp(argv[1], ".") == 0 || strcmp(argv[1], "..") == 0) getcwd(path, PATH_MAX);
    else strcpy(path, argv[1]);
    
    find_file(path, argv[2]);
    
    return 0;
}