#include <stdio.h>

int main(){
    int data[100];
    int n, i, j, temp;

    // input jumlah data
    do {
        printf("Masukkan jumlah data: ");
        scanf("%d", &n);
        if(n < 5 || n > 100) {
            printf("Jumlah data tidak valid\n");
        }
    } while (n < 5 || n > 100);
    
    // input data ke 1 hingga ke n
    for (i = 0; i < n; i++){
        printf("Data ke-%d : ", i + 1);
        scanf("%d", &data[i]);
    }

    // tampilkan data sebelum diurutkan
    printf("\nData sebelum di urutkan: ");
    for (i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");

    // urutkan naik
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - 1; j++){
            if (data[j] > data[j + 1]){
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    
    // Tampilkan data setelah urut
    printf("Data setelah diurutkan: ");
    for (i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}