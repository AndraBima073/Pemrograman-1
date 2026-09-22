#include <stdio.h>

int main() {
    int accumulator = 0;
    int bilangan;
    char op;

    printf("Mulai perhitungan\n");

    while (1) {
        scanf("%d %c", &bilangan, &op);

        if (op == 'e'){
            break;
        } else if (op == 's') {
            accumulator = bilangan;
        } else if (op == '+') {
            accumulator += bilangan;
        } else if (op == '-') {
            accumulator -= bilangan;
        } else if (op == '*') {
            accumulator *= bilangan;
        } else if (op == '/') {
            if (bilangan == 0) {
                printf("Error: Pembagian dengan nol ditolak\n");
                continue;
            }
            accumulator /= bilangan;
        } else if (op == '%') {
            if (bilangan == 0) {
                printf("Error: Pembagian dengan nol ditolak\n");
                continue;
            }
            accumulator %= bilangan;
        } else if (op == '&') {
            accumulator &= bilangan;
        } else if (op == '|') {
            accumulator |= bilangan;
        } else {
            printf("Operator tidak dikenali\n");
            continue;
        }

        printf("= %d\n", accumulator);
    }
    printf("Akhir perhitungan\n");
    return 0;
}