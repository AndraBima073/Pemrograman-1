#include <stdio.h>

void variabelDiff(){
    int otomatis = 0;
    static int tetap = 0;
    ++otomatis;
    ++tetap;
    printf("otomatis = %d", otomatis);
    printf(", static = %d\n", tetap);
}

int main() {
    for (int i = 0; i < 5; ++i) variabelDiff();
    return 0;
}