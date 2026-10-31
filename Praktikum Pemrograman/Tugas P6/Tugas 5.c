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
    int n, hasil;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    hasil = prima(n);
    if (hasil)
        printf("%d adalah bilangan prima (nilai balik = %d)\n", n, hasil);
    else
        printf("%d bukan bilangan prima (nilai balik = %d)\n", n, hasil);

    return 0;
}