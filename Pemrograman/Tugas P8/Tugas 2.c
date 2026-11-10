#include <stdio.h>
#include <string.h>
#include <ctype.h>

int polindrom(const char *kalimat){
    char bersih[256];
    int n = 0;
    int i, j;

    for (i = 0; kalimat[i] != '\0' && n < (int)sizeof(bersih) - 1; i++){
        if (isalnum((char)kalimat[i])){
            bersih[n++] = tolower((char)kalimat[i]);
        }
    }
    bersih[n] = '\0';

    for (i = 0, j = n -1; i < j; i++, j--){
        if (bersih[i] != bersih[j]){
            return 0;
        }
    }
    return 1;
}

int main() {
    char kalimat[256];

    printf("Kalimat : ");
    if (fgets(kalimat, sizeof(kalimat), stdin) == NULL){
        return 1;
    }

    kalimat[strcspn(kalimat, "\n")] = '\0';

    if (polindrom(kalimat)){
        printf("Termasuk PALINDROM\n");
    } else {
        printf("Bukan PALINDROM\n");
    }

    return 0;
}