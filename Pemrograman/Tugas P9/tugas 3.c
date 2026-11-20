#include <stdio.h>
#include <stdlib.h>
 
#define JUM_HURUF 5
#define UKURAN    8
#define SKALA     8
#define BESAR     (UKURAN * SKALA)

static int data_huruf[JUM_HURUF][UKURAN][UKURAN] = {
    {   /* A */
        {0,1,1,1,1,1,0,0},
        {0,1,0,0,0,1,0,0},
        {0,1,0,0,0,1,0,0},
        {1,1,1,1,1,1,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0}
    },
    {   /* B */
        {1,1,1,1,1,1,0,0},
        {1,0,0,0,0,1,0,0},
        {1,0,0,0,0,1,0,0},
        {1,1,1,1,1,1,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0}
    },
    {   /* C */
        {0,1,1,1,1,1,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,0,0},
        {1,1,0,0,0,0,0,0},
        {1,1,0,0,0,0,0,0},
        {1,1,0,0,0,0,1,0},
        {0,1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0}
    },
    {   /* D */
        {1,1,1,1,1,1,0,0},
        {1,1,0,0,0,1,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,0,1,0},
        {1,1,0,0,0,1,1,0},
        {1,1,1,1,1,1,0,0},
        {0,0,0,0,0,0,0,0}
    },
    {   /* E */
        {1,1,1,1,1,1,1,0},
        {1,1,0,0,0,0,0,0},
        {1,1,0,0,0,0,0,0},
        {1,1,1,1,1,1,0,0},
        {1,1,0,0,0,0,0,0},
        {1,1,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0}
    }
};

int main(void)
{
    int *salinan, *besar;
    int *src, *dst;
    int h, i, j, k, l;
    int total_asli = JUM_HURUF * UKURAN * UKURAN;
    int total_besar = JUM_HURUF * BESAR * BESAR;
 
    salinan = (int *)malloc(total_asli * sizeof(int));
    besar = (int *)calloc(total_besar, sizeof(int));
    if (salinan == NULL || besar == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }
 

    src = &data_huruf[0][0][0];
    dst = salinan;
    for (i = 0; i < total_asli; i++)
        *(dst + i) = *(src + i);
 

    for (h = 0; h < JUM_HURUF; h++)
        for (i = 0; i < UKURAN; i++)
            for (j = 0; j < UKURAN; j++) {
                int nilai = *(salinan + (h * UKURAN + i) * UKURAN + j);
                for (k = 0; k < SKALA; k++)
                    for (l = 0; l < SKALA; l++)
                        *(besar + (h * BESAR + (i * SKALA + k)) * BESAR
                                + (j * SKALA + l)) = nilai;
            }
 

    for (h = 0; h < JUM_HURUF; h++) {
        printf("Huruf %c (8x):\n", 'A' + h);
        for (i = 0; i < BESAR; i++) {
            for (j = 0; j < BESAR; j++)
                putchar(*(besar + (h * BESAR + i) * BESAR + j) ? '#' : ' ');
            putchar('\n');
        }
        printf("\n");
    }
 
    free(salinan);
    free(besar);
    return 0;
}