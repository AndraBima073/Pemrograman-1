#include <stdio.h>
#include <string.h>

#define MAX_PART_LEN 50
// Buffer nama lengkap: 50 (nama depan) + 1 (spasi) + 50 (nama belakang) + 1 ('\0') = 102
#define MAX_FULL_LEN (MAX_PART_LEN * 2 + 2)

// Fungsi pembantu untuk membersihkan karakter newline (\n) dari input fgets
void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char first_name[MAX_PART_LEN];
    char last_name[MAX_PART_LEN];
    char full_name[MAX_FULL_LEN];
    char compare_name[MAX_FULL_LEN];

    // 1. Membaca Nama Depan & Nama Belakang
    printf("Masukkan nama depan (maks %d karakter): ", MAX_PART_LEN - 1);
    if (fgets(first_name, sizeof(first_name), stdin) != NULL) {
        trim_newline(first_name);
    }

    printf("Masukkan nama belakang (maks %d karakter): ", MAX_PART_LEN - 1);
    if (fgets(last_name, sizeof(last_name), stdin) != NULL) {
        trim_newline(last_name);
    }

    // 2. Menggabungkan menjadi Nama Lengkap dengan snprintf (aman dari overflow)
    snprintf(full_name, sizeof(full_name), "%s %s", first_name, last_name);

    // 3. Menghitung Jumlah Karakter Nama Lengkap
    size_t total_chars = strlen(full_name);

    printf("\n=== INFORMASI NAMA LENGKAP ===\n");
    printf("Nama lengkap        : %s\n", full_name);
    printf("Jumlah karakter     : %zu karakter (termasuk spasi)\n", total_chars);
    printf("Ukuran buffer alokasi: %zu byte (aman dari overflow)\n", sizeof(full_name));

    // 4. Membaca Nama Pembanding
    printf("\nMasukkan nama pembanding: ");
    if (fgets(compare_name, sizeof(compare_name), stdin) != NULL) {
        trim_newline(compare_name);
    }

    // 5. Membandingkan dengan strcmp()
    int res = strcmp(full_name, compare_name);

    printf("\n=== HASIL PERBANDINGAN (strcmp) ===\n");
    printf("Perbandingan: \"%s\" vs \"%s\"\n", full_name, compare_name);
    printf("Nilai kembalian strcmp(): %d\n", res);

    if (res == 0) {
        printf("Hasil: Kedua nama IDENTIK (sama persis).\n");
    } else if (res < 0) {
        printf("Hasil: Nama lengkap mendahului nama pembanding secara alfabetis.\n");
    } else {
        printf("Hasil: Nama lengkap menyusul nama pembanding secara alfabetis.\n");
    }

    return 0;
}