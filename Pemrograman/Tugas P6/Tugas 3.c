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

void main()
{
    int t;
    char s, d, yes = 'y';

    while (yes == 'y') {
        printf("Masukkan suhu (contoh: 100 C) = ");
        scanf("%d %c", &t, &s);
        printf("Masukkan satuan tujuan (C, R, F) = ");
        scanf("%c", &d);
        scanf("%c", &d);
        printf("Hasil konversi suhu = %lf", suhu(t, s, d));
        printf("\nCoba lagi? (y/n) ");
        yes = getche();
        puts("\n\n\n");
    }
}