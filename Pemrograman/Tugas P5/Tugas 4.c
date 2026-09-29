#include <stdio.h>

int main() {
    int n;
    long long biner = 0;
    long long pengali = 1;

    printf("Input: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0 / 2 = 0 Sisa 0\n");
        biner = 0;
    } else {
        while (n > 0) {
            int sisa = n % 2;
            int hasil_bagi = n / 2;

            printf("%2d / 2 = %2d sisa %d\n", n, hasil_bagi, sisa);

            biner = biner + sisa * pengali;
            pengali = pengali * 10;

            n = hasil_bagi;
        }
    }
    printf("Hasil: %lld", biner);

    return 0;
}