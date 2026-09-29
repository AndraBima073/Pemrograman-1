#include <stdio.h>

int main() {
    int b1, b2, b3, b4, b5, prediksi;

    printf("PREDIKSI PESULAP MERAH\n\n");

    printf("Masukkan bilangan pertama   : ");
    scanf("%d", &b1);
    printf("Masukkan bilangan kedua     : ");
    scanf("%d", &b2);
    printf("Masukkan bilangan ketiga    : ");
    scanf("%d", &b3);

    printf("\n\nTULIS DIPAPAN PREDIKSI ANDA...\n\n");

    printf("Masukkan bilangan keempat   : ");
    scanf("%d", &b4);
    printf("Masukkan bilangan kelima    : ");
    scanf("%d", &b5);

    prediksi = b3 + (( b1 + b2 ) + ( b4 + b5 ));

    printf("\nKomputer akan menebak bilangan ANDA!\n");
    printf("\nTekan [ENTER]");
    getchar();
    getchar();

    printf("\n=======================================\n");
    printf("MENURUT PENERAWANGAN\n");
    printf("PREDIKSI ANDA = %d\n", prediksi);
    printf("=======================================\n");

    return 0;
}