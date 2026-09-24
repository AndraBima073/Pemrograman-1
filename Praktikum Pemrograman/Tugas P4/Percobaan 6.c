#include <stdio.h>

int main() {
    char operator;
    float bil1, bil2, hasil;

    printf("Masukkan: bilangan1 operator bilangan2\n");
    printf("Operator: + - * /\n");
    printf("Input: ");
    scanf("%f %c %f", &bil1, &operator, &bil2);

    if (operator == '*')
        hasil = bil1 * bil2;
    else if (operator == '/')
        hasil = bil1 / bil2;
    else if (operator == '+')
        hasil = bil1 + bil2;
    else if (operator == '-')
        hasil = bil1 - bil2;
    else {
        printf("Operator tidak dikenali.\n");
        return 0;
    }
    
    printf("Hasil: %.2f %c %.2f = %.2f\n", 
            bil1, operator, bil2, hasil);
    return 0;
}