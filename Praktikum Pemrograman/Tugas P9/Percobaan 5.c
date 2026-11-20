#include <stdio.h>

const char *nama_bulan(int n){
    static const char *bulan[] = {
        "Kode bulan salah",
        "Januari", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November", "Desember"
    };
    
    if (n < 1 || n > 12)
        return bulan[0];

    return bulan[n];
}

int main(void){
    int bulan;

    printf("Masukkan kode bulan [1-12]: ");
    if (scanf("%d", &bulan) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    printf("Bulan ke-%d adalah %s\n", bulan, nama_bulan(bulan));

    return 0;
}