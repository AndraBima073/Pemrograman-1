#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("Nilai awal = %d\n", a);

    a += 5;
    printf("Setelah a += 5 = %d\n", a);

    a -= 3;
    printf("Setelah a -= 3 = %d\n", a);

    a *= 2;
    printf("Setelah a *= 2 = %d\n", a);

    a /= 4;
    printf("Setelah a /= 4 = %d\n", a);

    return 0;
}
