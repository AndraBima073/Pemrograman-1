#include <stdio.h>
#include <string.h>

int main(void) {
    char kata1[30], kata2[30];

    printf("Masukkan kata pertama : ");
    scanf("%29s", kata1);
    printf("Masukkan kata kedua : ");
    scanf("%29s", kata2);

    int hasil = strcmp(kata1, kata2);

    if (hasil == 0)
        printf("Kedua kata sama.\n");
    else if (hasil < 0)
        printf("Kata pertama lebih dahulu secara leksikografis.\n");
    else
        printf("Kata kedua lebih dahulu secara leksikografis.\n");

    return 0;
}