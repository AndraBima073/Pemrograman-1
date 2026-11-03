#include <stdio.h>

int main()
{
    int tgl, bln, thn, maks, kode, total;
    int hariPerBulan[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /* Urutan pasaran berdasarkan total % 5 (sesuai tabel "Total Dari Atas") */
    char *pasaran[5] = {"Pon", "Wage", "Kliwon", "Legi", "Pahing"};

    /* Tabel kode pasaran.
       Baris = tahun % 20 (pola pasaran berulang tiap 20 tahun),
       kolom = bulan (Jan ... Des).
       Contoh: baris 6 untuk tahun 1906, 1926, 1946, 1966, 1986, 2006, 2026 */
    int tabel[20][12] = {
        {2, 3, 2, 3, 3, 4, 4, 0, 1, 1, 2, 2},   /*  0 : 1920, 1940, ... */
        {3, 4, 2, 3, 3, 4, 4, 0, 1, 1, 2, 2},   /*  1 : 1921, 1941, ... */
        {3, 4, 2, 3, 3, 4, 4, 0, 1, 1, 2, 2},   /*  2 : 1922, 1942, ... */
        {3, 4, 2, 3, 3, 4, 4, 0, 1, 1, 2, 2},   /*  3 : 1923, 1943, ... */
        {3, 4, 3, 4, 4, 0, 0, 1, 2, 2, 3, 3},   /*  4 : 1904, 1924, ... */
        {4, 0, 3, 4, 4, 0, 0, 1, 2, 2, 3, 3},   /*  5 : 1905, 1925, ... */
        {4, 0, 3, 4, 4, 0, 0, 1, 2, 2, 3, 3},   /*  6 : 1906, 1926, ... */
        {4, 0, 3, 4, 4, 0, 0, 1, 2, 2, 3, 3},   /*  7 : 1907, 1927, ... */
        {4, 0, 4, 0, 0, 1, 1, 2, 3, 3, 4, 4},   /*  8 : 1908, 1928, ... */
        {0, 1, 4, 0, 0, 1, 1, 2, 3, 3, 4, 4},   /*  9 : 1909, 1929, ... */
        {0, 1, 4, 0, 0, 1, 1, 2, 3, 3, 4, 4},   /* 10 : 1910, 1930, ... */
        {0, 1, 4, 0, 0, 1, 1, 2, 3, 3, 4, 4},   /* 11 : 1911, 1931, ... */
        {0, 1, 0, 1, 1, 2, 2, 3, 4, 4, 0, 0},   /* 12 : 1912, 1932, ... */
        {1, 2, 0, 1, 1, 2, 2, 3, 4, 4, 0, 0},   /* 13 : 1913, 1933, ... */
        {1, 2, 0, 1, 1, 2, 2, 3, 4, 4, 0, 0},   /* 14 : 1914, 1934, ... */
        {1, 2, 0, 1, 1, 2, 2, 3, 4, 4, 0, 0},   /* 15 : 1915, 1935, ... */
        {1, 2, 1, 2, 2, 3, 3, 4, 0, 0, 1, 1},   /* 16 : 1916, 1936, ... */
        {2, 3, 1, 2, 2, 3, 3, 4, 0, 0, 1, 1},   /* 17 : 1917, 1937, ... */
        {2, 3, 1, 2, 2, 3, 3, 4, 0, 0, 1, 1},   /* 18 : 1918, 1938, ... */
        {2, 3, 1, 2, 2, 3, 3, 4, 0, 0, 1, 1}    /* 19 : 1919, 1939, ... */
    };

    printf("Masukkan tanggal (dd-mm-yyyy) : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    if (thn < 1901 || thn > 2099 || bln < 1 || bln > 12)
    {
        printf("Input tidak valid (tahun 1901 - 2099).\n");
        return 1;
    }

    /* Jumlah hari dalam bulan (Februari 29 hari pada tahun kabisat) */
    maks = hariPerBulan[bln - 1];
    if (bln == 2 && thn % 4 == 0)
        maks = 29;

    if (tgl < 1 || tgl > maks)
    {
        printf("Input tidak valid (tanggal di luar jumlah hari bulan tersebut).\n");
        return 1;
    }

    kode  = tabel[thn % 20][bln - 1];
    total = tgl + kode;

    printf("Tanggal + kode: %d + %d = %d\n", tgl, kode, total);
    printf("Tanggal tersebut adalah pasaran %s.\n", pasaran[total % 5]);

    return 0;
}