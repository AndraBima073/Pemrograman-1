#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
    const char *teks = "Belajar Pointer Dalam Bahasa C";
    
    size_t n = strlen(teks);
    char *huruf_kecil = malloc(n + 1);
    char *huruf_besar = malloc(n + 1);

    if (huruf_kecil == NULL || huruf_besar == NULL) {
        fprintf(stderr, "Alokasi memori gagal.\n");
        free(huruf_kecil);
        free(huruf_besar);
        return 1;
    }

    for (size_t i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)teks[i];
        huruf_kecil[i] = (char)tolower(ch);
        huruf_besar[i] = (char)toupper(ch);
    }

    huruf_kecil[n] = '\0';
    huruf_besar[n] = '\0';
    printf("Asli : %s\n", teks);
    printf("Huruf kecil: %s\n", huruf_kecil);
    printf("Huruf besar: %s\n", huruf_besar);
    free(huruf_kecil);
    free(huruf_besar);

    return 0;
}