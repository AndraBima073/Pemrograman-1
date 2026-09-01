#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    int gunting = 1, batu = 2, kertas = 3, pilihan, computer;

    printf("Selamat datang di permainan gunting, batu, kertas. Silahkan pilih bentukmu!\n");
    printf("Gunting = 1, Batu = 2, Kertas = 3\n");
    scanf("%d", &pilihan);

    srand(time(NULL));
    computer = (rand() % 3) + 1;
    printf("Computer memilih: %d\n", computer);

    if (computer < pilihan){
        printf("Selamat kamu menang!!");

    } else if (computer > pilihan){
        printf("Sayang sekali kamu kalah");

    }else{
        printf("Kamu seri!!");
    }

    return 0;
    
}