#include <stdio.h>

int main(void){
    int nilai[10] = {86, 75, 98, 66, 56, 76, 80, 95, 70, 60};
    int *ip = nilai;
    int i;

    printf("Menggunakan indeks array:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", nilai[i]);

    printf("\n\nMenggunakan aritmetika pointer:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", *(nilai + i));
    
    printf("\n\nMenggunakan pointer yang bergerak:\n");
    for (ip = nilai; ip < nilai + 10; ip++)
        printf("%3d", *ip);
    
    printf("\n");

    return 0;
}