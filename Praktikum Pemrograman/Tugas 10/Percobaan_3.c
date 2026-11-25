#include <stdio.h>
#include <string.h>
struct Tanggal {
    int tanggal, bulan, tahun;
};

struct Mahasiswa {
    long long nim;
    char nama[50];
    struct Tanggal lahir;
};

int main(void) {
    struct Mahasiswa mhs;
    
    mhs.nim = 3226600064;
    strcpy(mhs.nama, "Andra Bima");
    mhs.lahir.tanggal = 12;
    mhs.lahir.bulan = 7;
    mhs.lahir.tahun = 2007;

    printf("NIM : %lld\n", mhs.nim);
    printf("Nama : %s\n", mhs.nama);
    printf("Tgl Lahir : %02d-%02d-%04d\n",
    mhs.lahir.tanggal, mhs.lahir.bulan, mhs.lahir.tahun);
    
    return 0;
}