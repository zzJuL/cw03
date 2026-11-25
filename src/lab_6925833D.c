#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 1000

int compare_files(  FILE *file_1, FILE *file_2, 
                    char *line_1, char *line_2, int *line_number )
{
    // TODO: write your code here
    if (file_1 == NULL || file_2 == NULL ||
        line_1 == NULL || line_2 == NULL || line_number == NULL) {
        return -1;
    }

    int current_line = 1;

    while (1) {
        char *res_1 = fgets(line_1, MAX_LINE_LEN, file_1);
        char *res_2 = fgets(line_2, MAX_LINE_LEN, file_2);

        if (res_1 == NULL && res_2 == NULL) {
            *line_number = 0;
            return 0;
        }

        if (res_1 == NULL && res_2 != NULL) {
            line_1[0] = '\0';
            *line_number = current_line;
            return 1;
        }

        if (res_1 != NULL && res_2 == NULL) {
            line_2[0] = '\0';
            *line_number = current_line;
            return 1;
        }

        if (strcmp(line_1, line_2) != 0) {
            *line_number = current_line;
            return 1;
        }

        current_line++;
    }

}

// DO NOT change the code below
#ifndef ___TEST___
int main()
{
    char line_1[MAX_LINE_LEN];
    char line_2[MAX_LINE_LEN];
    int line_number = 1;
    FILE *file_1;
    FILE *file_2;

    file_1 = fopen(FILE_1_PATH, "r");
    file_2 = fopen(FILE_2_PATH, "r");

    if ( compare_files(file_1, file_2, line_1, line_2, &line_number) != 0 )
    {
        printf("file1 [%d]: %s", line_number, line_1);
        printf("file2 [%d]: %s", line_number, line_2);
    }

    fclose(file_1);
    fclose(file_2);
    return 0;
}
#endif
// DO NOT change the code above
