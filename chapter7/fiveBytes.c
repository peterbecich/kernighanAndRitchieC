#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/C_file_input/output

int main(void)
{
    char buffer[5] = {0};  /* Initialized to zeroes */
    int i;
    FILE *fp = fopen("myfile", "rb");

    if (fp == NULL) {
        perror("Failed to open file \"myfile\"");
        return EXIT_FAILURE;
    }

    for (i = 0; i < 5; i++) {
        int rc = getc(fp);
        if (rc == EOF) {
            fputs("An error occurred while reading the file.\n", stderr);
            return EXIT_FAILURE;
        }
        buffer[i] = rc;
    }

    fclose(fp);

    printf("The bytes read were... %x %x %x %x %x\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);

    return EXIT_SUCCESS;
}

