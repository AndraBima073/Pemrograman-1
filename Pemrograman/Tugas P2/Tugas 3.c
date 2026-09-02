#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    float jari, luas, keliling;

    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &jari);

    luas = PI * pow(jari, 2);
    keliling = 2 * PI * jari;

    printf("Keliling lingkaran dengan jari-jari %.2f = %.2f\n", jari, keliling);
    printf("Luas lingkaran dengan jari-jari %.2f = %.2f\n", jari, luas);

    return 0;
}