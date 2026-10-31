#include <stdio.h>

double maximum(double x, double y, double z) {
    if (x > y && x > z) return x;
    else if (y > x && y > z) return y;
    else return z;
}

int main() {
    double a, b, c;
    printf("Masukkan tiga bilangan: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3){
        printf("Masukkan tidak valid\n");
        return 1;
    }
    printf("Nilai maximum = %.2f\n", maximum(a,b,c));
    return 0;
}