#include <stdio.h>

int main() {
    int i = 0, hasil = 1;

    ulang:
        i++;
        hasil *= 2;
    
        printf("Iterasi ke-%2d: %5d\n", i, hasil);
        if (i < 10)
            goto ulang;
    
    return 0;
}