#include <stdio.h>

int main(void)
{
    int nilai = 60;

    if (nilai >= 85) {
        printf("Grade A\n");
    } else if (nilai >= 75) {
        printf("Grade B\n");
    } else if (nilai >= 65) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    return 0;
}
