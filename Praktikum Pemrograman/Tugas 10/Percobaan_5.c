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
        file = fopen("kontak.txt", "w");

    if (file == NULL) {
        perror("File gagal dibuka");
        return 1;
    }

    fprintf(file, "Nama: %s\n", nama);
    fprintf(file, "Telepon: %s\n", telepon);
    fclose(file);
    printf("Data berhasil disimpan ke kontak.txt\n");

    return 0;
}