#include <stdio.h>

int kabisat(int tahun) {
    if (tahun % 400 == 0) {
        tahun = 1;
    } else if (tahun % 4 == 0 && tahun % 100 != 0) {
        tahun = 1;
    } else {
        tahun = 0;
    }
    return tahun;
}

int main() {
    int input;

    printf("Masukkan tahun (1900-2400) = ");
    scanf("%d", &input);

    if (input < 1900 || input > 2400) {
        printf("Tahun di luar batas!");
        return 1;
    }

    printf("Tahun %d %s Tahun kabisat", input, (kabisat(input)>0) ? "adalah" : "BUKAN");

    return 0;
}