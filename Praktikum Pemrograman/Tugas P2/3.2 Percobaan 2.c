#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    int hasil1 = a + b * c; 
    int hasil2 = (a + b) * c;

    printf("Hasil dari a + b * c    = %d\n", hasil1);
    printf("Hasil dari (a + b) * c  = %d\n", hasil2);

    return 0;
}