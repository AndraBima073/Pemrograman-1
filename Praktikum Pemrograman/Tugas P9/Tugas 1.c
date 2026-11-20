#include <stdio.h>

#define JUMLAH 12

/* Pengurutan naik (bubble sort) dengan parameter pointer dan jumlah elemen */
void urutkan(float *p, int n)
{
    int i, j;
    float temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main(void)
{
    float data[JUMLAH] = {7.5f, 2.25f, 9.8f, 1.1f, 5.6f, 3.14f,
                          8.9f, 0.5f, 6.7f, 4.4f, 2.71f, 10.2f};
    float *ptr;
    int i;

    printf("Sebelum diurutkan:\n");
    for (i = 0; i < JUMLAH; i++)
        printf("%.2f ", data[i]);
    printf("\n\n");

    urutkan(data, JUMLAH);

    printf("Sesudah diurutkan (indeks array):\n");
    for (i = 0; i < JUMLAH; i++)
        printf("%.2f ", data[i]);
    printf("\n\n");

    printf("Sesudah diurutkan (pointer):\n");
    for (ptr = data; ptr < data + JUMLAH; ptr++)
        printf("%.2f ", *ptr);
    printf("\n");

    return 0;
}