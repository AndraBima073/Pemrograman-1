#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {

float jari, luas, volume;
jari = 7;

luas = 4 * pi * pow(jari, 2);
volume = (4 * pi * pow(jari, 3))/3;

printf("Jari-Jari: %.0f cm\n", jari);
printf("Luas Bola: %.2f cm\n", luas);
printf("Volume Bola: %.2f cm\n", volume);

}