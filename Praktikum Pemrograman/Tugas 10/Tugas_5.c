#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Definisi struktur kamus dengan anggota kata dan definisi
struct Kamus {
    char kata[50];
    char definisi[256];
};

// Fungsi bantu untuk membandingkan string tanpa membedakan huruf besar/kecil
int samaIgnoreCase(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (tolower((unsigned char)s1[i]) != tolower((unsigned char)s2[i])) {
            return 0;
        }
        i++;
    }
    return s1[i] == '\0' && s2[i] == '\0';
}

// Fungsi untuk mencari kata di dalam array struktur
void cariKata(struct Kamus daftar[], int jumlah, const char *target) {
    for (int i = 0; i < jumlah; i++) {
        if (samaIgnoreCase(daftar[i].kata, target)) {
            printf("\n[Ditemukan]\n");
            printf("Kata     : %s\n", daftar[i].kata);
            printf("Definisi : %s\n", daftar[i].definisi);
            return;
        }
    }
    printf("\nKata \"%s\" tidak ditemukan dalam kamus.\n", target);
}

int main() {
    // Inisialisasi array struktur kamus
    struct Kamus kamus[] = {
        {"Algoritma", "Urutan langkah-langkah logis untuk menyelesaikan suatu masalah."},
        {"Compiler", "Program yang menerjemahkan kode sumber bahasa pemrograman ke kode mesin."},
        {"Pointer", "Variabel yang menyimpan alamat memori dari variabel lain."},
        {"Struct", "Tipe data bentukan yang mengelompokkan beberapa variabel berbeda tipe."},
        {"Array", "Kumpulan elemen bertipe data sama yang tersimpan berurutan di memori."}
    };
    int jumlahKata = sizeof(kamus) / sizeof(kamus[0]);
    char input[50];

    printf("=== PROGRAM KAMUS SEDERHANA ===\n");
    printf("Masukkan kata yang ingin dicari: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    cariKata(kamus, jumlahKata, input);

    return 0;
}