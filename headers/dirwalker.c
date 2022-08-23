#include "dirwalker.h"

int is_dir(struct dirent *dir_ent) {
    if (dir_ent->d_type == DT_DIR 
        && strcmp(dir_ent->d_name, ".") != 0 
        && strcmp(dir_ent->d_name, "..") != 0)
        return 1;
    return 0;
}

void find_file(char path[], char filename[]) {

    DIR *dr;
    struct dirent *dir_ent;
    char path_buffer[PATH_MAX];

    dr = opendir(path);

    if (dr) {
        
        while((dir_ent = readdir(dr)) != NULL) {
            if (is_dir(dir_ent)) {
                strcpy(path_buffer, path);
                strcat(path_buffer, "/");
                strcat(path_buffer, dir_ent->d_name);
                find_file(path_buffer, filename);
            } else {
                if (strcmp(dir_ent->d_name, filename) == 0) {
                    printf("%s/%s\n", path, dir_ent->d_name);
                }
            }
        }

        closedir(dr);
    }
}