#include <stdio.h>

void naikkan_nilai(int *x, int *y){
    if (x != NULL)
        *x += 2;
    if (y != NULL)
        *y += 3;
}

int main(void){
    int a = 3;
    int b = 7;

    printf("Semula : a = %d, b = %d\n", a, b);
    naikkan_nilai(&a, &b);
    printf("Sekarang : a = %d, b = %d\n", a, b);

    return 0;
}