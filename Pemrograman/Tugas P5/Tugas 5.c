#include <stdio.h>

int main() {
    int input, prima;
    int banyak = 0;
    long long jumlah = 0;

    printf("Masukkan nilai maksimum = ");
    scanf("%d", &input);

    if (input <= 1){
        printf("Bukan bilangan prima");
        return 1;
    } else {
        for (int i = 2; i <= input; i++){
            prima = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prima = 0;
                    break;
                }
            }
            if (prima) {
                if (banyak > 0) {
                    printf(", ");
                }
                printf("%d", i);
                banyak++;
                jumlah += i;
            }
        }
    }
    printf("\nJumlah bilangan prima = %d\n", banyak);
    printf("Jumlah seluruh bilangan prima = %lld", jumlah);
    return 0;
}