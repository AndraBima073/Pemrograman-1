#include <stdio.h>

int main() {
    int a,b,c,d;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    printf("Masukkan nilai d: ");
    scanf("%d", &d);

    printf("Hasil pertama: %d\n", (a>b) && (c<d) || (a==b));
    printf("Hasil kedua: %d\n", (a==b) || (c==d) && (a<b));
    printf("Hasil ketiga: %d\n", (a<=c) && (b>=d) || (a==d));
    printf("Hasil keempat: %d\n", (a>=d) || (b<=c) && (c==d));
    printf("Hasil kelima: %d\n", (a!=b) && (c>d) || (a!=d));
}