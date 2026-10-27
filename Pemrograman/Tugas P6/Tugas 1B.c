#include <stdio.h>

long int factorial(int input) {
    long int faktorial = 1;

    for(int i = 1; i <= input; i++){
        faktorial *= i;
    }

    return faktorial;
}

int main() {
    int input;

    printf("Masukkan angka yang mau di faktorkan: ");
    scanf("%d", &input);

    printf("Hasil dari pemfaktoran adalah %ld", factorial(input));


    return 0;
}