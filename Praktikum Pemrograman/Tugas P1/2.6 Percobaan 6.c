#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    float jari_jari = 10;
    float luas, keliling;
    
    luas = pi * pow(jari_jari, 2);
    keliling = 2 * pi * jari_jari;

    printf("Jari-Jari Lingkaran = %.2f\n", jari_jari);
    printf("Luas Lingkaran      = %.2f\n", luas);
    printf("Keliling Lingkaran  = %.2f\n", keliling);

    return 0;
}