#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;

    printf("Masukkan nilai x: ");
    scanf("%f", &x);

    y = 3 * pow(x, 2) + 6 * x + 9;
    z = (2 * pow(y, 2) + 5 * pow(x, 2)) / (9 * y);

    printf("Didapatkan nilai y = %.0f ", y);
    printf("dan nilai z = %.2f\n", z);

    return 0;
}