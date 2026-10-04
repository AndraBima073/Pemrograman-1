#include <stdio.h>

int main() {
    int input, i;
    int jumlah = 0;

    printf("Masukkan jumlah triangular yang ingin dihitung = ");
    scanf("%d", &input);

    for(i = 1; i <= input; i++){
        jumlah += i;
    }
    printf("Ada %d triangular", jumlah);
    return 0;
}