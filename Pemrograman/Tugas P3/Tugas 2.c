#include <stdio.h>

int main() {
    int a=7, b=9, c=5, d=3;
    int m, n, hasil;

    m=(a>b) ? a: b;
    n=(c>d) ? c: d;
    hasil=(m>n) ? m: n;
    printf("Variabel m: %d\n", m);
    printf("Variabel n: %d\n", n);
    printf("Hasil: %d\n", hasil);
}