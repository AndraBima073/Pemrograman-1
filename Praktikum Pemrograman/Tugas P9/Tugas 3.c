#include <stdio.h>

void tukar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int pasangan[][2] = {{5, 10}, {-3, 8}, {0, 99}, {42, 42}};
    int jumlah = sizeof(pasangan) / sizeof(pasangan[0]);
    int i, x, y;

    for (i = 0; i < jumlah; i++) {
        x = pasangan[i][0];
        y = pasangan[i][1];
        printf("Uji %d | Sebelum: x = %d, y = %d", i + 1, x, y);
        tukar(&x, &y);
        printf(" | Sesudah: x = %d, y = %d\n", x, y);
    }

    return 0;
}