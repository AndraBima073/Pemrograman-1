#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Bilangan yang lebih besar adalah %d\n", a);
    } else if (b > a) {
        printf("Bilangan yang lebih besar adalah %d\n", b);
    } else {
        printf("Kedua bilangan sama, yaitu %d\n", a);
    }

    return 0;
}
