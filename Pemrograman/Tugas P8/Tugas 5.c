#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[512];
    int hitung[26] = {0};
    int total = 0;
    int i;

    printf("Masukkan kalimat:\n");
    if (fgets(kalimat, sizeof(kalimat), stdin) == NULL){
        return 1;
    }

    kalimat[strcspn(kalimat, "\n")] = '\0';

    for (i = 0; kalimat[i] != '\0'; i++){
        char c = (char)kalimat[i];

        if (isalpha(c)){
            hitung[tolower(c) - 'a']++;
            total++;
        }
    }

    printf("\nJumlah huruf = %d\n", total);

    int pertama = 1;
    for (i = 0; i < 26; i++){
        if (hitung[i] > 0){
            if (!pertama) {
                printf(", ");
            }
            printf("%c = %d", 'a' + i, hitung[i]);
            pertama = 0;
        }
    }
    printf("\n");

    return 0;
}