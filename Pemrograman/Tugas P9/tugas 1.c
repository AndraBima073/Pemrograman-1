#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 14
#define MIN 1
#define MAX 999

void tampil_index(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void tampilPointerOffset(int *p, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d", *(p + i));
    }
    printf("\n");
}

void tampilPointerInc(int *p, int n){
    int *akhir = p + n;
    while (p < akhir){
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}

void urutkan(int *p, int n){
    int i, j, temp;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1; j++){
            if(*(p + j) > *(p + j +1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main(){
    int data[N];
    int i;

    srand(time(0));
    for (i = 0; i < N; i++){
        data[i] = rand() % (MAX - MIN + 1) + MIN;
    }

    printf("=== SEBELUM DIURUTKAN ===\n");
    printf("Cara 1, (index array)       :");
    tampil_index(data, N);
    printf("Cara 2, (pointer + offset)  :");
    tampilPointerOffset(data, N);
    printf("Cara 3, (pointer ++)        :");
    tampilPointerInc(data, N);

    urutkan(data, N);

    printf("\n=== SESUDAH DIURUTKAN ===\n");
    printf("Cara 1, (index array)       :");
    tampil_index(data, N);
    printf("Cara 2, (pointer + offset)  :");
    tampilPointerOffset(data, N);
    printf("Cara 3, (pointer ++)        :");
    tampilPointerInc(data, N);  
    
    return 0;
}