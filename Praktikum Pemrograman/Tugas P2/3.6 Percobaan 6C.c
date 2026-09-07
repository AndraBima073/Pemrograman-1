#include <stdio.h>

int main() {
    double r = 5;
    double pi = 3.14159;
    double volume;

    volume = (4.0 / 3.0) * pi * r * r * r;
    printf("Jari-jari = %.2f\n", r);
    printf("Volume    = %.2f\n", volume);

    return 0;
}