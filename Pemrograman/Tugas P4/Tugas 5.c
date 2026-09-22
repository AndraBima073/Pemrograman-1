#include <stdio.h>

int main () {
    int runtime = 1;
    float a, b, hasil;
    char oper;

    printf("Masukkan 2 bilangan dan sebuah operator.\n\n");
    printf("Dengan format:\n\n");
    printf("Bilangan-1 operator Bilangan-2\n\n");
    printf("= ");
    scanf("%f %c %f", &a, &oper, &b);
    switch (oper)
    {   
    case '*':
        hasil = a * b ;
        break;
    
    case '/':
        if (b == 0) {
            printf("Bilangan tidak dapat dibagi dengan nol!");
            runtime = 0;
        } else {
            hasil = a / b ; 
        }
        break;
        
    case '+':
        hasil = a + b ;
        break;

    case '-':
        hasil = a - b ;
        break;

    default:
        printf("Operator tidak ditemukan!");
        runtime = 0;
    }
    if(runtime == 1) {
        printf("\nHasil perhitungan\n\n");
        printf("%.2f %c %.2f = %.2f", a, oper, b, hasil);
    } else {
        printf("\nGunakan operator +, -, / dan * saja!");
    }
    return 0;
}