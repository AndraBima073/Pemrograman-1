#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    float jari, tinggi, luas_a, luas_s, luas_p, volume;
    jari = 7;
    tinggi = 15;

    luas_a = pi * pow(jari, 2);
    luas_s = 2 * pi * jari * tinggi;
    luas_p = 2 * pi * jari * (jari + tinggi);
    volume = pi * jari * 2 * tinggi;

    printf("Luas Alas Tabung: %f cm\n", luas_a);
    printf("Luas Selimut Tabung: %f cm\n", luas_s);
    printf("Luas Permukaan Tabung: %f cm\n", luas_p);
    printf("Volume Tabung: %f cm\n", volume);

}