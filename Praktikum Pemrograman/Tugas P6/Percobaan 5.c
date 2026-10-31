#include <stdio.h>

double minimum(double x, double y) {
    if (x < y) return x;
    return y;
}

int main() {
    double a, b;
    printf("Masukkan dua bilangan: ");
    if (scanf("%lf %lf", &a, &b) != 2){
        printf("Masukkan tidak valid\n");
        return 1;
    }
    printf("Nilai minimum = %.2f\n", minimum(a,b));
    return 0;
}