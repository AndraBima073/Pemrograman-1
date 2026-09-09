#include <stdio.h>

int main() {
    int a,b,c,d,x,y;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    printf("Masukkan nilai d: ");
    scanf("%d", &d);

    x = (a>b) ? a: b;
    y = (c>d) ? c: d;

    printf("Nilai A lebih %s dari pada B\n", (a>b) ? "besar" : "kecil");
    printf("Nilai C lebih %s dari pada D\n", (c>d) ? "besar" : "kecil");
    printf("Hasil terbesar dari a,b,c,d adalah: %d\n", (x>y) ? x: y);

}