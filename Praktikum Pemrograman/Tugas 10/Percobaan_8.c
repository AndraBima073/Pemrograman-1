#include <stdio.h>

struct Mahasiswa {
    int nim;
    char nama[40];
    float ipk;
};

int main(void) {
    struct Mahasiswa mhs[3] = {
        {1001, "Andi", 3.50},
        {1002, "Budi", 3.75},
        {1003, "Citra", 3.90}
    };

    struct Mahasiswa baca;
    FILE *file;

    /* Menulis data ke file */
    file = fopen("mahasiswa.txt", "w");

    if (file == NULL) {
    perror("Gagal membuka file untuk menulis");
    return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(file, "%d;%s;%.2f\n",
        mhs[i].nim, mhs[i].nama, mhs[i].ipk);
    }

    fclose(file);

    /* Membaca kembali data dari file */
    file = fopen("mahasiswa.txt", "r");
    if (file == NULL) {
        perror("Gagal membuka file untuk membaca");
        return 1;
    }

    printf("DATA MAHASISWA DARI FILE\n");
    printf("NIM | NAMA | IPK\n");

    while (fscanf(file, "%d;%39[^;];%f",
        &baca.nim, baca.nama, &baca.ipk) == 3) {
        printf("%d | %s | %.2f\n",
        baca.nim, baca.nama, baca.ipk);
        /* Buang karakter newline sebelum membaca record berikutnya */
        int ch;
        while ((ch = fgetc(file)) != '\n' && ch != EOF) { }
    }

    fclose(file);
    return 0;
}