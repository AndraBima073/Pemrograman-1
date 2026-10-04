#include <stdio.h>

int main() {
    int target, i;
    int ditemukan = 0;

    printf("Masukkan nilai target: ");
    scanf("%d", &target);

    for (i = 0; i <= 20; i++) {
        if(i == target){
            ditemukan = 1;
            break;
        }
    }
    if (ditemukan) {
        printf("\nTarget ditemukan!");
    } else {
        printf("\nTarget tidak ditemukan.");
    }
    return 0;
}