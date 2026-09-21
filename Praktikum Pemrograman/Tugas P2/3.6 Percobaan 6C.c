#include <stdio.h>

int main() {
    float r = 5;
    float pi = 3.14159;
    float volume;

    volume = (4.0 / 3.0) * pi * r * r * r;
    printf("Jari-jari = %.2f\n", r);
    printf("Volume    = %.2f\n", volume);

    return 0;
}