#include <stdio.h>

int main () {
    double r = 7.0;
    double t = 10.0;
    double phi = 3.14159;
    double volume;
    double luas;

    luas = phi * r * r;
    printf("Luas alas tabung    = %.2f\n", luas);
    volume = phi * r * r * t;
    printf("Volume tabung       = %.2f\n", volume);

    return 0;
}