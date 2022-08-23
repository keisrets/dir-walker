#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/limits.h>

int is_dir(struct dirent *dir_ent);
void find_file(char path[], char filename[]);