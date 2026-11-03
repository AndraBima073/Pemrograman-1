#include <stdio.h>

int maksimum(const int data[], int n) {
    int terbesar = data[0];
    for (int i = 1; i < n; i++) {
        if(data[i] > terbesar) {
            terbesar = data[i];
        }
    }
    return terbesar;
}

int main(void) {
    int data1[] = {5, 34, 56, -12, 3, 19};
    int data2[] = {1, -2, 34, 207, 93, -12};

    printf("Maksimum data1 = %d\\n", maksimum(data1, 6));
    printf("Maksimum data2 = %d\\n", maksimum(data2, 6));

    return 0;
}