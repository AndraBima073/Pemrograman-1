#include <stdio.h>

int main(void)
{
    int bilangan;

    printf("Masukkan sebuah bilangan integer: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("Bilangan %d adalah GENAP\n", bilangan);
    } else {
        printf("Bilangan %d adalah GANJIL\n", bilangan);
    }

    return 0;
}
