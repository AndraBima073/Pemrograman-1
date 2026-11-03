#include <stdio.h>

int main() {
    int tanggal, bulan, tahun;
    int kabisat, kodeBulan, kodeHari;

    int tabelBulan[12] = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
    char *namaHari[7] = {"Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat"};

    printf("Masukkan tanggal (dd-mm-yy) = ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    if (bulan < 1 || bulan > 12 || tanggal < 1 || tanggal > 31 || tahun < 0 || tahun > 99){
        printf("Input tidak valid.\n");
        return 1;
    }

    kabisat = (tahun % 4 == 0 && tahun != 0);

    kodeBulan = tabelBulan[bulan - 1];

    if (kabisat && bulan == 1){
        kodeBulan = 0;
    } else if ( kabisat && bulan == 2){
        kodeBulan = 3;
    }

    kodeHari = (tanggal + kodeBulan + tahun + tahun /4) % 7;
    printf("Tanggal tersebut adalah hari %s.\n", namaHari[kodeHari]);
    return 0;
}