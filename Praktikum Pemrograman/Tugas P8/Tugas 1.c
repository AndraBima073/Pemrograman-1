#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char teks[512];
    int kecil, besar, angka, tandaBaca, i;

    kecil = besar = angka = tandaBaca = 0;

    printf("Masukkan string : ");
    if (fgets(teks, sizeof(teks), stdin) == NULL){
        return 1;
    }

    teks[strcspn(teks, "\n")] = '\0';

    for(i = 0; teks[i] != '\0'; i++) {
        char c = (char)teks[i];

        if (islower(c)){
            kecil++;
        } else if (isupper(c)){
            besar++;
        } else if (isdigit(c)){
            angka++;
        } else if (ispunct(c)){
            tandaBaca++;
        }
    }
    
    printf("\nJumlah Huruf Kecil      = %d\n", kecil);
    printf("Jumlah Huruf Besar      = %d\n", besar);
    printf("Jumlah Angka Numerik    = %d\n", angka);
    printf("Jumlah Tanda Baca       = %d\n", tandaBaca);
    printf("Total Karakter          = %d\n", kecil + besar + angka + tandaBaca);


    return 0;
}