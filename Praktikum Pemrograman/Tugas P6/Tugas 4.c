#include <stdio.h>
#include <conio.h>

double suhu(float t, char s, char d)
{
    double k;
    switch (s) {
        case 'C':
            if (d == 'R')
                k = 4. / 5. * t;
            else
                k = 9. / 5. * t + 32;
            break;
        case 'R':
            if (d == 'C')
                k = 5. / 4. * t;
            else
                k = 9. / 4. * t + 32;
            break;
        case 'F':
            if (d == 'C')
                k = 5. / 9. * (t - 32);
            else
                k = 4. / 9. * (t - 32);
            break;
    }
    return k;
}

int main()
{
    float t;
    char s, d, ulang = 'y';

    while (ulang == 'y' || ulang == 'Y') {
        
        printf("Masukkan suhu (contoh: 100 C) = ");
        if (scanf("%f %c", &t, &s) != 2) {
            printf("Masukan asal tidak valid\n");
            return 1;
        }

        printf("Masukkan satuan tujuan (C, R, F) = ");
        if (scanf(" %c", &d) != 1 || (d != 'C' && d != 'R' && d != 'F')) {
            printf("Masukan tujuan tidak valid\n");
            return 1;
        }

        printf("Hasil konversi suhu = %.2f", suhu(t, s, d));
        printf("\nCoba lagi? (y/n) ");
        scanf(" %c", &ulang);
        puts("\n");
    }
}