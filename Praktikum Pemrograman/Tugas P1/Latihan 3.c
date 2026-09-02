#include <stdio.h>

int main() {
    int panjang = 15, lebar = 8;

    int luas, keliling;

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas Persegi Panjang        = %d\n", luas);
    printf("Keliling Persegi Panjang    = %d\n", keliling);

    return 0;
}