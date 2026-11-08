#include <stdio.h>

int main(void) {
    int nilai[10] = {0};
    
    nilai[0] = 197;
    nilai[2] = -100;
    nilai[5] = 350;
    nilai[3] = nilai[0] + nilai[5];
    nilai[9] = nilai[5] / 10;
    nilai[2]--;

    for (int i = 0; i < 10; i++) {
        printf("nilai[%d] = %d\n", i, nilai[i]);
    }
    
    return 0;
}