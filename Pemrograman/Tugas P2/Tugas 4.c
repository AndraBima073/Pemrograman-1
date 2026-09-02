#include <stdio.h>

int main() {
    int jam, menit, rumus;

    printf("Program konversi jam ke menit\n");
    printf("Masukkan jam dan menit (jj:mm) = ");
    scanf("%d:%d", &jam, &menit);
    
    rumus = jam * 60 + menit;
    printf("Jam %d adalah setara dengan %d menit\n", jam, rumus);

    return 0;
}