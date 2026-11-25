#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char kalimat[256];
    int jumlah[26] = {0}; // Menyimpan frekuensi huruf A-Z (indeks 0-25)
    int sempurna = 1;     // Flag penanda pangram (1 = sempurna, 0 = tidak)

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Menghitung kemunculan setiap huruf (mengabaikan kapital/kecil)
    for (int i = 0; kalimat[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)kalimat[i];
        if (isalpha(ch)) {
            char hurufBesar = toupper(ch);
            jumlah[hurufBesar - 'A']++;
        }
    }

    // Menampilkan jumlah masing-masing huruf A s/d Z
    for (int i = 0; i < 26; i++) {
        printf("jumlah %c = %d\n", 'A' + i, jumlah[i]);
        if (jumlah[i] == 0) {
            sempurna = 0; // Jika ada satu saja huruf yang jumlahnya 0, bukan kalimat sempurna
        }
    }

    // Mengecek status kalimat sempurna
    if (sempurna) {
        printf("\nAdalah Kalimat SEMPURNA\n");
    } else {
        printf("\nBukan Kalimat SEMPURNA\n");
    }

    return 0;
}