#include <stdio.h>

int main(void) {
    FILE *file;
    char baris[100];

    file = fopen("kontak.txt", "r");

    if (file == NULL) {
        perror("File tidak dapat dibuka");
        return 1;
    }

    printf("ISI FILE KONTAK\n");
    
    while (fgets(baris, sizeof baris, file) != NULL) {
        printf("%s", baris);
    }

    fclose(file);
    return 0;
}