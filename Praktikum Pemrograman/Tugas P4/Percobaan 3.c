#include <stdio.h>

int main() {
    char c;
    
    printf("Masukkan suatu karakter: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("Karakter tersebut termasuk huruf kecil.\n");
    } else {
    printf("Karakter tersebut bukan huruf kecil.\n");
    }
    
    return 0;
}