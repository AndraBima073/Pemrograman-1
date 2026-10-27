#include <stdio.h>
#include <time.h>

int main() {
    register int regisvar;
    int intvar;
    clock_t awal, akhir;
    double waktuRegister, waktuInteger;
    int batas = 1000000000;

    awal = clock();
    for (regisvar = 0; regisvar < batas; regisvar++) { }
    akhir = clock();
    waktuRegister = (double)(akhir - awal) / CLOCKS_PER_SEC;

    awal = clock();
    for (intvar = 0; intvar < batas; intvar++) { }
    akhir = clock();
    waktuInteger = (double)(akhir - awal) / CLOCKS_PER_SEC;

    printf("Jumlah iterasi          : %d\n", batas);
    printf("Waktu variabel register : %.3f detik\n", waktuRegister);
    printf("Waktu variabel integer  : %.3f detik\n", waktuInteger);
    return 0;
}