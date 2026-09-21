#include <stdio.h>

int main () {
    int jenis_bilangan, bilangan;
    char alphabhet;

    printf("Masukkan bilangan bulat = ");
    scanf("%d", &bilangan);
    
    if (bilangan % 2 == 0 ){
        printf("Bilangan bulat Genap\n\n");
    } else {
        printf("Bilangan bulat Ganjil\n\n");
    }
    
    printf("Masukkan huruf (besar/kecil), angka atau karakter khusus: ");
    scanf(" %c", &alphabhet);

    if (alphabhet >= 48 && alphabhet <= 57)
    {
        printf("Karakter Angka\n");
    }
    else if (alphabhet >= 65 && alphabhet <= 90)
    {
        printf("Huruf Besar\n");
    }
    else if (alphabhet >= 97 && alphabhet <= 122)
    {
        printf("Huruf kecil\n");
    }
    else {
        printf("Karakter khusus\n");
    }
    
    

    return 0;
}