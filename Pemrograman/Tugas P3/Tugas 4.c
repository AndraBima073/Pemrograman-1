#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("bitwise a & b = %d\n", a & b);
    printf("bitwise a | b = %d\n", a | b);
    printf("bitwise a ^ b = %d\n", a ^ b);
    printf("bitwise a << 1 = %d\n", a << 1);
    printf("bitwise a >> 1 = %d\n", a >> 1);

    return 0;
}