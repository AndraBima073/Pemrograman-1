#include <stdio.h>
#include <stdbool.h>

bool validSegitiga(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    if (a + b <= c || a + c <= b || b + c <= a) return false;
    return true;
}

const char *jenisSegitiga(double a, double b, double c) {
    if (a == b && b == c) return "sama sisi";
    if (a == b || b == c || a == c) return "sama kaki";
    return "sembarang";
}

int main() {
    double a, b, c;

    printf("Masukkan tiga sisi segitiga: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Masukan tidak valid\n");
        return 1;
    }

    if (validSegitiga(a, b, c))
        printf("Segitiga valid, jenisnya: %s\n", jenisSegitiga(a, b, c));
    else
        printf("Bukan segitiga yang valid\n");

    return 0;
}