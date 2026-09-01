#include <stdio.h>

int main() {

    float celcius = 100, fahrenheit, rumus;

    rumus = (celcius * 9/5) + 32;
    fahrenheit = rumus;

    printf("Suhu dalam Celsius:      %.2f\n", celcius);
    printf("Suhu dalam Fahrenheit:   %.2f\n", fahrenheit);

    return 0;
}