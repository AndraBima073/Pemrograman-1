#include <stdio.h>

int main(void){
    int x = 2002;
    int y;
    int *px = NULL;

    px = &x; /* px menyimpan alamat x */
    y = *px; /* y menerima nilai yang ditunjuk px */

    printf("Alamat x : %p\n", (void *)&x);
    printf("Isi px : %p\n", (void *)px);
    printf("Nilai x : %d\n", x);
    printf("Nilai *px : %d\n", *px);
    printf("Nilai y : %d\n", y);

    return 0;
}