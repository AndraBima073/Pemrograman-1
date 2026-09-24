#include <stdio.h>
int main() {
    int pembilang, penyebut, sisa;
    
    printf("Masukkan pembilang: ");
    scanf("%d", &pembilang);
    printf("Masukkan penyebut: ");
    scanf("%d", &penyebut);

    if (penyebut == 0) {
        printf("Penyebut tidak boleh 0.\n");
    } else {
        sisa = pembilang % penyebut;
        if (sisa != 0) {
        printf("%d tidak habis dibagi %d.\n", pembilang, penyebut);
        } else {
            printf("%d habis dibagi %d.\n", pembilang, penyebut);
        }
    }
    return 0;
}