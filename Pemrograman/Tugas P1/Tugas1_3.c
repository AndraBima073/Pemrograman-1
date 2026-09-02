#include <stdio.h>
#include <math.h>

#define pi 3.14

float jari,tinggi,luas,volume,rumus,pelukis;
int pilihan;

int Bola(), Tabung(), Kerucut(), Kuadrat();

int main () {
    printf("Silahkan Pilih bentuk yang ingin kamu hitung\n");
    printf(" 1. Bola\n 2. Tabung\n 3. Kerucut\n");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        Bola();
        break;
    
    case 2:
        Tabung();
        break;

    case 3:
        Kerucut();
        break;

    default:
        break;
    }
}

int Bola() {
    printf("Silahkan pilih Volume atau Luas yang ingin kamu hitung\n");
    printf(" 1. Luas\n 2. Volume\n");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Luas\n");
        printf("Jari: ");
        scanf("%f", &jari);
    
        rumus = 4 * pi * pow(jari, 2);
        printf("Hasil: %.2f", rumus);
        break;
    
    case 2:
        printf("Volume\n");
        printf("Jari ");
        scanf("%f", &jari);

        rumus = 4 * pi * pow(jari, 3) / 3;
        printf("Hasil: %.2f", rumus);
        break;

    default:
        break;
    }
}

int Tabung() {
    printf("Silahkan pilih Volume atau Luas yang ingin kamu hitung\n");
    printf(" 1. Luas Alas\n 2. Luas Selimut\n 3. Luas Permukaan\n 4. Volume\n");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Luas Alas\n");
        printf("Jari: ");
        scanf("%f", &jari);
    
        rumus = pi * pow(jari, 2);
        printf("Hasil: %.2f", rumus);
        break;
    
    case 2:
        printf("Luas Selimut\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);

        rumus = 2 * pi * jari * tinggi;
        printf("Hasil: %.2f", rumus);
        break;

    case 3:
        printf("Luas Permukaan\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);

        rumus = 2 * pi * jari * (jari + tinggi);
        printf("Hasil: %.2f", rumus);
        break;

    case 4:
        printf("Volume\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);

        rumus = pi * jari * 2 *tinggi;
        printf("Hasil: %.2f", rumus);
        break;

    default:
        break;
    }
}

int Kerucut() {
    printf("Silahkan pilih Volume atau Luas yang ingin kamu hitung\n");
    printf(" 1. Luas Alas\n 2. Luas Selimut\n 3. Luas Permukaan\n 4. Volume\n");
    scanf("%d", &pilihan);

        switch (pilihan)
    {
    case 1:
        printf("Luas Alas\n");
        printf("Jari: ");
        scanf("%f", &jari);
    
        rumus = pi * pow(jari, 2);
        printf("Hasil: %.2f", rumus);
        break;
    
    case 2:
        printf("Luas Selimut\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);
        printf("Garis Pelukis: ");
        scanf("%f", &pelukis);

        rumus = pi * jari * pelukis;
        printf("Hasil: %.2f", rumus);
        break;

    case 3:
        printf("Luas Permukaan\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);
        printf("Garis Pelukis: ");
        scanf("%f", &pelukis);

        rumus = pi * jari * (jari + pelukis);
        printf("Hasil: %.2f", rumus);
        break;

    case 4:
        printf("Volume\n");
        printf("Jari: ");
        scanf("%f", &jari);
        printf("Tinggi: ");
        scanf("%f", &tinggi);

        rumus = pi * pow(jari, 2) * tinggi / 3;
        printf("Hasil: %.2f", rumus);
        break;

    default:
        break;
    }
}

int Kuadrat(){
    
}