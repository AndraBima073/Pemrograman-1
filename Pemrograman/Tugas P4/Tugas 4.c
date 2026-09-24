#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c, d, x1, x2;

    printf("Masukkan nilai A: ");
    scanf("%lf", &a);
    printf("Masukkan nilai B: ");
    scanf("%lf", &b);
    printf("Masukkan nilai C: ");
    scanf("%lf", &c);

    d = (b * b) - (4 * a * c);
    printf("\nD = %.2f\n", d);

    if (d > 0){
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Akar-akar berbeda:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (d == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Akar-akar kembar:\n");
        printf("x1 = x2 = %.2f", x1);
    } else {
        double real = -b / (2 * a);
        double imaginer = sqrt(-d) / (2 * a);
        x1 = real + imaginer;
        x2 = real - imaginer;
        printf("Akar-akar imaginer (berlainan):\n");
        printf("x1 = %.2f + %.2f\n", real, imaginer);
        printf("x1 = %.2lf\n\n", x1);
        printf("x2 = %.2f - %.2f\n", real, imaginer);
        printf("x2 = %.2lf", x2);
    }
    
    return 0;
}