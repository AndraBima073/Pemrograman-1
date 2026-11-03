#include <stdio.h>

int jumlahSampai(int n){
    int jumlah = 0;
    for (int i = 1; i <= n; ++i){
        jumlah += i;
    }
    return jumlah;
}

int main(){
    printf("Hasil penjumlahan hingga 10: %d\n", jumlahSampai(10));
    printf("Hasil penjumlahan hingga 0: %d\n", jumlahSampai(0));
    printf("Hasil penjumlahan hingga 50: %d\n", jumlahSampai(50));
    return 0;
}