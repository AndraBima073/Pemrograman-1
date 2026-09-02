#include <stdio.h>

int main() {
    float Celcius, Fahrenheit;

    printf("Masukkan suhu dalam Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Celcius = (Fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celcius\n", Fahrenheit, Celcius);

    return 0;
}