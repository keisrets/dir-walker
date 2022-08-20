#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int is_dir(struct dirent *dir_ent);
void find_file(DIR *dr, char *path, char *filename);