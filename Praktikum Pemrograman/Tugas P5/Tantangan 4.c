#include <stdio.h>

int main(void) {
    int i, j;
    int tinggi = 5;

    printf("Segitiga kiri:\n");
    for (i = 1; i <= tinggi; i++) {
        for (j = 1; j <= i; j++) {
            printf("* "); 
        }
        printf("\n");
    }

    printf("\nSegitiga terbalik\n");
    for (i = tinggi; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPersegi\n");
    for (i = 1; i <= tinggi; i++){
        for(j = 1; j <= tinggi; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}