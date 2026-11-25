#include <stdio.h>
#include <string.h>

int sama_str(char s1[], char s2[])
{
    int i = 0, jawab;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        jawab = 1; /* string sama */
    else
        jawab = 0;
    return (jawab);
}

int main()
{
    char str1[100], str2[100];

    printf("Masukkan string pertama : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Menghapus karakter newline dari fgets

    printf("Masukkan string kedua   : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Menghapus karakter newline dari fgets

    if (sama_str(str1, str2) == 1) {
        printf("Hasil: Kedua string SAMA (return 1)\n");
    } else {
        printf("Hasil: Kedua string BERBEDA (return 0)\n");
    }

    return 0;
}