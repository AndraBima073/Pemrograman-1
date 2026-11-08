#include <stdio.h>

int main() {
    char nama[4][10] = {"Ahmad", "Adang", "Dani", "Edi"};
    int nilai[4][3] = {
        {81, 90, 62},
        {50, 83, 87},
        {89, 55, 65},
        {77, 70, 92}
    };

    printf("%-4s %-8s %-8s %-10s %-8s %-10s\n",
            "No", "Nama", "Bahasa", "Matematika", "Digital", "Rata-Rata");

    for (int i = 0; i < 4; i++){
        int jumlah = 0;
        for (int j = 0; j < 3; j++){
            jumlah += nilai[i][j];
        }
        float rata = jumlah / 3.0;

        printf("%-4d %-8s %-8d %-10d %-8d %-10.2f\n",
                i + 1, nama[i], nilai[i][0], nilai[i][1], nilai[i][2], rata);
    }
    return 0;
}