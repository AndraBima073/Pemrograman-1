#include <stdio.h>

int main(void){
    int a = 1975;
    int *b = &a;
    int **c = &b;

    printf("Nilai a = %d\n", a);
    printf("Nilai *b = %d\n", *b);
    printf("Nilai **c = %d\n", **c);
    printf("Alamat a = %p\n", (void *)&a);
    printf("Isi b = %p\n", (void *)b);
    printf("Alamat b = %p\n", (void *)&b);
    printf("Isi c = %p\n", (void *)c);
    printf("Alamat c = %p\n", (void *)&c);

    return 0;
}