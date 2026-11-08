#include <stdio.h>

#define JUMLAH_MHS 4
#define JUMLAH_MATKUL 3

float rataMahasiswa(int nilai[][JUMLAH_MATKUL], int baris){
    int jumlah = 0;
    for (int j = 0; j < JUMLAH_MATKUL; j++){
        jumlah += nilai[baris][j];
    }
    return jumlah / (float)JUMLAH_MATKUL;
}

float rataKelas(int nilai[][JUMLAH_MATKUL], int kolom){
    int jumlah = 0;
    for (int i = 0; i < JUMLAH_MHS; i++){
        jumlah += nilai[i][kolom];
    }
    return jumlah / (float)JUMLAH_MHS;
}

int nilaiTertinggi(int nilai[][JUMLAH_MATKUL], int kolom) {
    int maks = nilai[0][kolom];
    for (int i = 1; i < JUMLAH_MHS; i++){
        if (nilai[i][kolom] > maks){
            maks = nilai[i][kolom];
        }
    }
    return maks;
}

int nilaiTerendah(int nilai[][JUMLAH_MATKUL], int kolom) {
    int min = nilai[0][kolom];
    for (int i = 1; i < JUMLAH_MHS; i++){
        if (nilai[i][kolom] < min){
            min = nilai[i][kolom];
        }
    }
    return min;
}

int mahasiswaTerbaik(int nilai[][JUMLAH_MATKUL]) {
    int idx = 0;
    float maks = rataMahasiswa(nilai, 0);
    for (int i = 1; i < JUMLAH_MHS; i++){
        float r = rataMahasiswa(nilai, i);
        if (r > maks){
            maks = r;
            idx = i;
        }
    }
    return idx;
}

int main(){
    char nama[JUMLAH_MHS][10] = {"Ahmad", "Adang", "Dani", "Edi"};
    char mapel[JUMLAH_MATKUL][12] = {"Bahasa", "Matematika", "Digital"};
    int nilai[JUMLAH_MHS][JUMLAH_MATKUL] = {
        {81, 90, 62},
        {50, 83, 87},
        {89, 55, 65},
        {77, 70, 92}
    };

    printf("\n%-4s %-8s %-8s %-10s %-8s %-10s\n",
           "No", "Nama", "Bahasa", "Matematika", "Digital", "Rata-Rata");

    for (int i = 0; i < JUMLAH_MHS; i++) {
        printf("%-4d %-8s %-8d %-10d %-8d %-10.2f\n",
               i + 1, nama[i], nilai[i][0], nilai[i][1], nilai[i][2],
               rataMahasiswa(nilai, i));
    }

    printf("\n=== Statistik Per Mata Pelajaran ===\n");
    printf("%-12s %-12s %-10s %-10s\n", "Mapel", "Rata Kelas", "Tertinggi", "Terendah");
    for (int j = 0; j < JUMLAH_MATKUL; j++) {
        printf("%-12s %-12.2f %-10d %-10d\n",
               mapel[j], rataKelas(nilai, j),
               nilaiTertinggi(nilai, j), nilaiTerendah(nilai, j));
    }

    int best = mahasiswaTerbaik(nilai);
    printf("\nMahasiswa dengan rata-rata tertinggi: %s (%.2f)\n",
           nama[best], rataMahasiswa(nilai, best));

    return 0;
}