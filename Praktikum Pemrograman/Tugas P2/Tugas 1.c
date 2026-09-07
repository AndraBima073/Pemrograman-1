#include <stdio.h>

int main() {
    int panjang = 15;
    int lebar = 8;

    int luas = panjang * lebar;
    int keliling = 2 * (panjang + lebar);

    printf("Luas        = %d\n", luas);
    printf("Keliling    = %d\n", keliling);

    return 0;
}