#include <stdio.h>

#define UKURAN 14

int main(){
    char data[UKURAN][UKURAN];
    char *p;
    int i, j;

    for (i = 0; i < UKURAN; i++){
        for (j = 0; j < UKURAN; j++){
            data[i][j] = 'X';
        }
    }

    p = &data[0][0];
    for (i = 0; i < UKURAN; i++){
        for (j = 0; j < UKURAN; j++){
            printf("%c ", p[i * UKURAN + j]);
        }
        printf("\n");
    }
    return 0;
}