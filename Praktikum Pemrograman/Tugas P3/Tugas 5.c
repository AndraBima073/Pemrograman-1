#include <stdio.h>
#include <string.h>

int main(void)
{
    char username[50];
    char password[50];

    const char USERNAME_VALID[] = "admin";
    const char PASSWORD_VALID[] = "12345";

    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, USERNAME_VALID) == 0 && strcmp(password, PASSWORD_VALID) == 0) {
        printf("Login berhasil! Selamat datang, %s.\n", username);
    } else {
        printf("Login gagal. Username atau password salah.\n");
    }

    return 0;
}
