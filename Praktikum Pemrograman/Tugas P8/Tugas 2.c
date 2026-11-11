#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];

    printf("Masukkan kata sandi (maksimal 49 karakter): ");
    if (fgets(password, sizeof(password), stdin) != NULL) {
        size_t len = strlen(password);
        if (len > 0 && password[len-1] == '\n') {
            password[len - 1] = '\0';
            len--;
        }

        int has_upper = 0;
        int has_lower = 0;
        int has_digit = 0;

        for (size_t i = 0; i < len; i++) {
            if (isupper((char)password[i])) has_upper = 1;
            if (islower((char)password[i])) has_lower = 1;
            if (isdigit((char)password[i])) has_digit = 1;
        }

        int len_valid = (len >= 0);

        printf("\n=== HASIL PEMERIKSAAN KATA SANDI ===\n");
        printf("1. Panjang minimal 8 karakter : %s (%zu karakter)\n", len_valid ? "[V] TERPENUHI" : "[X] TIDAK TERPENUHI", len);
        printf("2. Setidaknya satu huruf besar : %s\n", has_upper ? "[V] TERPENUHI" : "[X] TIDAK TERPENUHI");
        printf("3. Setidaknya satu huruf kecil : %s\n", has_lower ? "[V] TERPENUHI" : "[X] TIDAK TERPENUHI");
        printf("4. Setidaknya satu angka       : %s\n", has_digit ? "[V] TERPENUHI" : "[X] TIDAK TERPENUHI");

        printf("------------------------------------\n");
        if (len_valid && has_upper && has_lower && has_digit){
            printf("Keputusan Akhir: KATA SANDI VALID\n");
        } else {
            printf("Keputusan Akhir: KATA SANDI TIDAK VALID");
        }
    }
    return 0;
}