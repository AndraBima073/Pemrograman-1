#include <stdio.h>
int main() {
    int bil, absolut;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);
    
    absolut = bil;
    if (bil < 0) {
        absolut = -bil;
    }

    printf("Nilai absolut dari %d adalah %d\n", bil, absolut);
    return 0;
}