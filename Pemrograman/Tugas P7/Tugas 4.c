#include <stdio.h>

#define MAKS 99

int main()
{
    int n, i, j, baris, kolom, bBaru, kBaru, angka;
    int kotak[MAKS][MAKS] = {0};

    printf("Masukkan ordo (ganjil) : ");
    scanf("%d", &n);

    if (n < 1 || n > MAKS || n % 2 == 0)
    {
        printf("Ordo harus bilangan ganjil (1 - %d).\n", MAKS);
        return 1;
    }

    /* Angka 1 diletakkan di baris 0, kolom tengah */
    baris = 0;
    kolom = n / 2;
    kotak[baris][kolom] = 1;

    for (angka = 2; angka <= n * n; angka++)
    {
        /* Bergerak diagonal ke kanan atas */
        bBaru = (baris - 1 + n) % n;
        kBaru = (kolom + 1) % n;

        if (kotak[bBaru][kBaru] != 0)
        {
            /* Kotak sudah terisi: turun satu baris dari posisi sebelumnya */
            bBaru = (baris + 1) % n;
            kBaru = kolom;
        }

        baris = bBaru;
        kolom = kBaru;
        kotak[baris][kolom] = angka;
    }

    printf("\nBujursangkar ajaib ordo %d:\n\n", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d", kotak[i][j]);
        printf("\n");
    }

    return 0;
}