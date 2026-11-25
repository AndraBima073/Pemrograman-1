#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file;
    char nama[50], telepon[25];

    printf("Masukkan nama: ");
    
    if (fgets(nama, sizeof nama, stdin) == NULL) return 1;
        nama[strcspn(nama, "\n")] = '\0';
        printf("Masukkan nomor telepon: ");

    if (fgets(telepon, sizeof telepon, stdin) == NULL) return 1;
        telepon[strcspn(telepon, "\n")] = '\0';
        file = fopen("kontak.txt", "a");

    if (file == NULL) {
        perror("File gagal dibuka");
        return 1;
    }

    fprintf(file, "Nama: %s\nTelepon: %s\n", nama, telepon);
    fclose(file);
    printf("Data berhasil ditambahkan.\n");

    return 0;
}