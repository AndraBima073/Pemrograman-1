#include <stdio.h>
#include <string.h>

int main() {
    char sentence[256];
    char keyword[100];

    // Membaca input kalimat
    printf("Masukkan kalimat: ");
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        size_t len = strlen(sentence);
        if (len > 0 && sentence[len - 1] == '\n') {
            sentence[len - 1] = '\0';
        }
    }

    // Membaca input kata kunci
    printf("Masukkan kata kunci: ");
    if (fgets(keyword, sizeof(keyword), stdin) != NULL) {
        size_t len = strlen(keyword);
        if (len > 0 && keyword[len - 1] == '\n') {
            keyword[len - 1] = '\0';
        }
    }

    // Mencari kata kunci di dalam kalimat menggunakan strstr()
    char *match = strstr(sentence, keyword);

    printf("\n=== HASIL PENCARIAN ===\n");
    if (match != NULL) {
        // Menghitung indeks (0-based) melalui aritmatika pointer
        int index = (int)(match - sentence);
        printf("Kata kunci \"%s\" DITEMUKAN pada indeks ke-%d.\n", keyword, index);
    } else {
        printf("Kata kunci \"%s\" TIDAK DITEMUKAN.\n", keyword);
    }

    return 0;
}