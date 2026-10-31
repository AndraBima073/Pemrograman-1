#include <stdio.h>

void tampilkanPesan();

int main() {
    for (int i = 1; i <= 5; ++i){
        printf("Pesan ke-%d: ", i);
        tampilkanPesan();
    }
    return 0;
}

void tampilkanPesan(){
    printf("Belajar fungsi C\n");
}