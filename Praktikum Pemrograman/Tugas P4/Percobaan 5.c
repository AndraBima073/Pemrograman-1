#include <stdio.h>

int main() {
    char tag;
    
    printf("Masukkan tipe tak (2 / 4): ");
    scanf(" %c", &tag);

    if (tag == '2') {
        printf("Merek sepeda motor bertipe 2 tak:\n");
        printf("1. YAMAHA\n");
        printf("2. SUZUKI\n");
        printf("3. HONDA\n");
    } else {
        printf("Merek sepeda motor bertipe 4 tak:\n");
        printf("1. HONDA\n");
        printf("2. SUZUKI\n");
        printf("3. YAMAHA\n");
    }
    return 0;
}