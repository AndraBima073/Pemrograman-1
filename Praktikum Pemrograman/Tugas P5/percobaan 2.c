#include <stdio.h>

int main(void) {
    int n, jumlah = 0;
    
    for (n = 1; n <= 200; n++) {
        jumlah += n;
    }
    
    printf("Jumlah 200 triangular = %d\n", jumlah);
    
    return 0;
}