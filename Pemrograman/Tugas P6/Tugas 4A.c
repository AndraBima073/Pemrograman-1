#include <stdio.h>

int prima(int n) {
    if (n < 2) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
        return 0;
    }

    return 1;
}

int main() {
    int n;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (prima(n))
        printf("%d adalah bilangan prima (nilai balik = %d)\n", n, prima(n));
    else
        printf("%d bukan bilangan prima (nilai balik = %d)\n", n, prima(n));

    return 0;
}