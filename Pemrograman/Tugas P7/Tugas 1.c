#include <stdio.h>

int main(){
    int data[8] = {7, 8, 4, 2, 9, 3, 1, 6};
    int urut[8];
    int i, j, temp, total;
    float median;

    // 1. Tampilkan data
    printf("Data (index 1-8):\n");
    for (i = 0; i < 8; i++) {
        printf("index %d : %d\n", i + 1, data[i]);
    }

    // 2. Tampilkan angka genap
    printf("\nAngka genap: ");
    for (i = 0; i < 8; i++){
        if (data[i] % 2 == 0){
            printf("%d", data[i]);
        }
    }
    printf("\n");

    // 3. Tampilkan angka terbesar
    int terbesar = data[0];
    for (i = 1; i < 8; i++){
        if (data[i] > terbesar) {
            terbesar = data[i];
        }
    }
    printf("Angka terbesar: %d\n", terbesar);

    // 4. Urut dari terkecil ke besar
    for (i = 0; i < 8; i++){
        urut[i] = data[i];
    }
    for (i = 0; i < 8 - 1; i++){
        for (j = 0; j < 8 - 1; j++){
            if (urut[j] > urut[j + 1]) {
                temp = urut[j];
                urut[j] = urut[j + 1];
                urut[j + 1] = temp;
            }
            
        }
        
    }
    printf("Urut dari kecil: ");
    for (i = 0; i < 8; i++){
        printf("%d ", urut[i]);
    }
    printf("\n");
    
    // 5. Tampilkan rata-rata
    for (i = 0; i < 8; i++){
        total += data[i];
    }
    printf("Rata-rata: %.2f\n", (float)total / 8);

    // 6. Tampilkan nilai tengah
    if (8 % 2 == 0){
        median = (urut[8 / 2 - 1] + urut[8 / 2]) / 2.0;
    } else {
        median = urut[8 / 2];
    }
    printf("Nilai tengah: %.2f\n", median);

    return 0;
}