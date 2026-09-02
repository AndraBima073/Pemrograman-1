#include <stdio.h>

int main() {
    
    int aint = 25, bint = 6, hasil_int = aint / bint;
    float aflo = 25, bflo = 6, hasil_float = aflo / bflo;

    printf("Hasil pembagian (integer)   = %d\n", hasil_int);
    printf("Hasil pembagian (float)     = %.2f\n", hasil_float);

    return 0;
}