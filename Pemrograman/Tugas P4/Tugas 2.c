#include <stdio.h>

int main () {
    int runtime = 1;
    char operation;
    float bil1, bil2, hasil;

    printf("Masukkan 2 bilangan dan sebuah operator. \n\n");
    printf("Dengan format:\n\n");
    printf("= bilangan-1 operator bilangan-2\n\n");
    printf("= ");
    scanf("%f %c %f", &bil1, &operation, &bil2);
    switch (operation)
    {
    case '*':
        hasil = bil1 * bil2;
        break;

    case '/':
        if (bil2 == 0){
            runtime = 0;
        } else {
            hasil = bil1 / bil2;
        }
        break;        
        
    case '+':
        hasil = bil1 + bil2;
        break;

    case '-':
        hasil = bil1 - bil2;
        break;

    default:
        runtime = 0;
        break;
    }

    if (runtime == 1)    {
        printf("Hasil perhitungan \n\n");
        printf("%.2f %c %.2f = %.2f", bil1, operation, bil2, hasil);
    } else {
        printf("\nOperator SALAH!\n");
        printf("Gunakan operator +, -, / dan * saja\n");
    }
    
    return 0;
}