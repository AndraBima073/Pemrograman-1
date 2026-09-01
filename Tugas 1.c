#include <stdio.h>
#include <math.h>

#define pi 3.14

float jari, Tinggi, rumus;

int Luas_Tabung(), Volume_Tabung(), Volume_Bola(), Kuadrat();

int main() {
    int Pilihan;

    printf(" 1. Luas Tabung\n 2. Volume Tabung\n 3. Volume Bola\n 4. Kuadrat\n");
    printf("Silahkan pilih: ");
    scanf("%d", &Pilihan);

    switch (Pilihan)
    {
    case 1:
        Luas_Tabung();
        break;
    
    case 2:
        Volume_Tabung();
        break;

    case 3:
        Volume_Bola();
        break;

    case 4:
        Kuadrat();
        break;

    default:
        printf("Pilihan tidak valid\n");
        break;
    }
}

int Luas_Tabung() {
    printf("Selamat datang di calculator Luas Tabung\n");
    printf("Silahkan isi:\n");
    printf("Jari: ");
    scanf("%f", &jari);
    printf("Tinggi: ");
    scanf("%f", &Tinggi);
    
    rumus = 2 * pi * jari * Tinggi + 2 * pi * pow(jari, 2);
    printf("Luas Tabung: %f", rumus);
}

int Volume_Tabung() {
    printf("Selamat datang di calculator Volume Tabung\n");
    printf("Silahkan isi:\n");
    printf("Jari: ");
    scanf("%f", &jari);
    printf("Tinggi: ");
    scanf("%f", &Tinggi);

    rumus = pi * pow(jari, 2) * Tinggi;
    printf("Volume Tabung: %f", rumus);
}

int Volume_Bola() {
    printf("Selamat datang di calculator Volume Bola\n");
    printf("Silahkan isi:\n");
    printf("Jari: ");
    scanf("%f", &jari);

    rumus = 4 * pi * pow(jari, 3) / 3;
    printf("Volume Bola: %f", rumus);
}

int Kuadrat() {
    double a, b, c, diskriminan, root1, root2, complexPart;

    printf("Silahkan isi koefisien a, b, dan c: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    diskriminan = b * b - 4 * a * c ;

    if (diskriminan > 0){
        root1 = (-b + sqrt(diskriminan)) / (2 * a);
        root2 = (-b - sqrt(diskriminan)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (diskriminan == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        printf("Not done yet");
    }
    
}