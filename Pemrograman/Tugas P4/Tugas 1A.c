#include <stdio.h>

int main () {
    int jenis_bilangan, bilangan;

    printf("Masukkan bilangan bulat = ");
    scanf("%d", &bilangan);
    
    if (bilangan % 2 == 0 ){
        printf("Bilangan bulat Genap\n\n");
    } else {
        printf("Bilangan bulat Ganjil\n\n");
    }
    return 0;
}