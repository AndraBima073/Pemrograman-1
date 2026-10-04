#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Proses ke-%d\n", i);

        if (i == 5) {
            printf("Perulangan dihentikan.\n");
            break;
        }
    }

    return 0;
}