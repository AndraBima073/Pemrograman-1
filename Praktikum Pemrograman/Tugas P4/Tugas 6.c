#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("Program menghitung akar persamaan kuadrat\n");
    printf("Masukkan nilai A: ");
    scanf("%f", &a);
    printf("Masukkan nilai B: ");
    scanf("%f", &b);
    printf("Masukkan nilai C: ");
    scanf("%f", &c);
    
    if (a == 0){
        printf("A = 0, Persamaan bukan persamaan kuadrat.\n");
        if (b != 0) {
            x1 = -c / b;
            printf("Persamaan menjadi linear (Bx + C = 0), akar: x = %.2f\n", x1);
        } else {
            printf("A dan B sama sama 0, persamaan tidak valid.\n");
        }
        return 0;
    }

    d = (b * b) - (4 * a * c);
    printf("Nilai deteminan D = %.2f", d);

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("D > 0, terdapat dua akar real berbeda.\n");
        printf("x1 = %.2f", x1);
        printf("x2 = %.2f", x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("D = 0, terdapat satu akar real kembar.\n");
        printf("x1 = x2 = %.2f", x1);
    } else {
        float real = -b / (2 * a);
        float imaginer = sqrt(-d) / (2 * a);
        printf("D < 0, terdapat dua akar kompleks.\n");
        printf("x1 = %.2f + %.2f\n", real, imaginer);
        printf("x2 = %.2f - %.2f\n", real, imaginer);
    }

    return 0;
}