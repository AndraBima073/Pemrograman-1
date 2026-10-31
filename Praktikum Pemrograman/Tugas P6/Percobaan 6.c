#include <stdio.h>

void demo(){
    int otomatis = 0;
    static int tetap = 0;
    ++otomatis;
    ++tetap;
    printf("otomatis = %d", otomatis);
    printf(", static = %d\n", tetap);
}

int main() {
    for (int i = 0; i < 0; ++i) demo();
    return 0;
}