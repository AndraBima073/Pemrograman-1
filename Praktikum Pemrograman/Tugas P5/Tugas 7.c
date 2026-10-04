#include <stdio.h>

int main(void) {
    int i;
    int faktorial = 1; 

    printf("=== Tabel Faktorial ===\n\n");
    printf("n\tn!\tHasil\n");
    printf("------------------------\n");

    for (i = 1; i <= 10; i++) {
        faktorial = faktorial * i;
        
        printf("%d\t%d!\t%d\n", i, i, faktorial);
    }

    printf("------------------------\n");
    return 0;
}