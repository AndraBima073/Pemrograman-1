#include <stdio.h>

#define JUMLAH 10

int main(){
    int data[JUMLAH];
    int *p = data;
    int i;
    int jumlah = 0;
    float rata;

    for (i = 0; i < JUMLAH; i++)
        *(p + i) = (i + 1) * 10;
 
    printf("Isi Array:\n");
    for (i = 0; i < JUMLAH; i++)
        printf("%d ", *(p + i));
    printf("\n\n");
 
    for (i = 0; i < JUMLAH; i++)
        jumlah += *(p + i);
    rata = (float)jumlah / JUMLAH;
 
    printf("Jumlah data   : %d\n", jumlah);
    printf("Rata-rata     : %.2f\n", rata);
 
    return 0;
}