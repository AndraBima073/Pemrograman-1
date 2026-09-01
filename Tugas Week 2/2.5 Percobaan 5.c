#include <stdio.h>

int main() {
    float harga = 132.055;
    float jumlah = 50;
    float total;

    total = harga * jumlah; 

    printf("Harga   = %.3f\n", harga);
    printf("Jumlah  = %.0f\n", jumlah);
    printf("Total   = %.3f\n", total);
    
    return 0;
}