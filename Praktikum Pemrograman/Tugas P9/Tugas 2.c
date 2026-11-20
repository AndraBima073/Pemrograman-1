#include <stdio.h>
 
#define UKURAN 12
 
int main(void)
{
    char data[UKURAN][UKURAN];
    int i, j;
 
    for (i = 0; i < UKURAN; i++)
        for (j = 0; j < UKURAN; j++)
            data[i][j] = 'X';
 
    for (i = 0; i < UKURAN; i++) {
        for (j = 0; j < UKURAN; j++)
            printf("%c ", *(*(data + i) + j));
        printf("\n");
    }
 
    return 0;
}