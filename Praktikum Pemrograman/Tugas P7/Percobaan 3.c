#include <stdio.h>

int main(void) {
    int data[10] = {0, 1, 4, 9, 16};
    
    for (int i = 0; i < 10; i++) {
        printf("data[%d] = %d\\n", i, data[i]);
    }
    
    return 0;
}