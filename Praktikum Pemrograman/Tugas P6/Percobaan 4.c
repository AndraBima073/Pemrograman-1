#include <stdio.h>

double nilaiAbsolut(double x){
    return (x < 0) ? -x : x;
}

double akarKuadrat(double x){
    if (x < 0) return -1.0;
    if (x == 0) return 0.0;

    double tebakan = x;
    const double epsilon = 0.00001;
    while (nilaiAbsolut(tebakan * tebakan - x) >= epsilon) {
        tebakan = (tebakan + x / tebakan) / 2.0;
    }
    return tebakan;
}

int main() {
    printf("Hasil dari akar kuadrat 4.0: %.2f\n", akarKuadrat(4.0));
    printf("Hasil dari akar kuadrat 0.0: %.2f\n", akarKuadrat(0.0));
    printf("Hasil dari akar kuadrat -39.5: %.2f\n", akarKuadrat(-39.5));
    return 0;
}