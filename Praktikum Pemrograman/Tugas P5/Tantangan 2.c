#include <stdio.h>

int main(void) {
    int pilihan;

    do {
    printf("\n=== MENU ===\n");
    printf("1. Tampilkan pesan\n");
    printf("0. Keluar\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
        printf("Praktikum Pemrograman Dasar\n");
    else if (pilihan != 0)
        printf("Pilihan tidak tersedia.\n");

    } while (pilihan != 0);
    return 0;
}