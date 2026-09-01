#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    float jari, tinggi, luas_a, luas_s, luas_p, volume, pelukis;
    jari = 7;
    tinggi = 24;
    pelukis = 25;

    luas_a = pi * pow(jari, 2);
    luas_s = pi * jari * pelukis;
    luas_p = pi * jari * (jari + pelukis);
    volume = pi * pow(jari, 2) * tinggi / 3;

    printf("Jari-Jari Kerucut: %.0f cm\n", jari);
    printf("Tinggi Kerucut: %.0f cm\n", tinggi);
    printf("Garis Pelukis Kerucut: %.0f cm\n", pelukis);
    printf("Luas Alas Kerucut: %.2f cm\n", luas_a);
    printf("Luas Selimut Kerucut: %.2f cm\n", luas_s);
    printf("Luas Permukaan Kerucut: %.2f cm\n", luas_p);
    printf("Volume Kerucut: %.2f cm\n", volume);
    return 0;
}