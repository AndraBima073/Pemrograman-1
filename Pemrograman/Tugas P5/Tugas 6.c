#include <stdio.h>
#include <math.h>

int main() {
    float akar, input, hasil, n, test1, test2;
    int runtime = 1;

    printf("Silahkan masukkan nilai: ");
    scanf("%f", &input);

    if (input <= 0){
        printf("Harap beri bilangan lebih dari 0");
        return 1;
    }

    n = input / 2;

    do
    {
        hasil = (n+input/n)/2;
        printf("(%.4f+%.4f/%.4f)/2 = %.4f\n", n, input, n, hasil);
        
        if (fabs(hasil - n) < 0.00005 ){
            break;
        }
        
        n = hasil;
    } while (runtime = 1);
    return 0;
}