#include <stdio.h>

int main(void) {
    int fib[100], n;
    
    printf("Jumlah suku (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Input tidak valid.\\n");
        return 1;
    }

    fib[0] = 0;

    if (n > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < n; i++){
        printf("%d ", fib[i]);
    }

    printf("\n");
    return 0;
}