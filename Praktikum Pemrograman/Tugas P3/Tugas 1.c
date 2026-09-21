#include <stdio.h>

int main(void)
{
    int bilangan;

    printf("Masukkan sebuah bilangan integer: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("Bilangan %d adalah POSITIF\n", bilangan);
    } else if (bilangan < 0) {
        printf("Bilangan %d adalah NEGATIF\n", bilangan);
    } else {
        printf("Bilangan %d adalah NOL\n", bilangan);
    }

    return 0;
}
