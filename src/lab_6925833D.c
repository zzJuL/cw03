#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 1000

int compare_files(  FILE *file_1, FILE *file_2, 
                    char *line_1, char *line_2, int *line_number )
{
    // TODO: write your code here
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
