#include <stdio.h>

int main() {
    int Celcius, Fahrenheit;

    printf("Masukkan suhu dalam Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    Celcius = (Fahrenheit - 32) * 5 / 9;
    printf("%d derajat Fahrenheit adalah = %d derajat Celcius\n", Fahrenheit, Celcius);

    return 0;
}