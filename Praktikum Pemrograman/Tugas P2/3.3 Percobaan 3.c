#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    double hasil1 = a / b;
    double hasil2 = 5.0 / 2.0;
    double hasil3 = (double)a / b;

    printf("Hasil dari a / b         = %.2f\n", hasil1);
    printf("Hasil dari 5.0 / 2.0     = %.2f\n", hasil2);
    printf("Hasil dari (double)a / b = %.2f\n", hasil3);

    return 0;
}