#include "dirwalker.h"

int is_dir(struct dirent *dir_ent) {
    if (dir_ent->d_type == DT_DIR && strcmp(dir_ent->d_name, ".") != 0 && strcmp(dir_ent->d_name, "..") != 0)
        return 1;
    return 0;
}

void find_file(DIR *dr, char *path, char *filename) {

    struct dirent *dir_ent;

    dr = opendir(path);

    if (dr) {
        while((dir_ent = readdir(dr)) != NULL) {
            if (is_dir(dir_ent)) {
                find_file(dr, dir_ent->d_name, filename);
            } else {
                if (strcmp(dir_ent->d_name, filename) == 0) {
                    getcwd(path, 1024);
                    printf("%s/%s\n", path, dir_ent->d_name);
                    exit(EXIT_SUCCESS);
                }
            }
        }
    }

}