#include <stdio.h>

int main(void) {
    int i;
    float nilai, jumlah = 0.0, rata_rata;

    for (i = 0; ++i;) {
        printf("Masukkan data nilai: ");
        scanf("%f", &nilai);

        if (nilai <= -1) {
            printf("Input nilai dihentikan");
            break;
        }

        jumlah = jumlah + nilai; 
        
    }

    rata_rata = jumlah / (i-1);
    i -= 1;

    printf("\n\nTotal Nilai = %.0f\n", jumlah);
    printf("Jumlah Data = %d\n", i);
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}