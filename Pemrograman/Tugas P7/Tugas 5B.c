#include <stdio.h>

/* Normalisasi sisa bagi agar tidak negatif (hasil % di C bisa negatif) */
int mod(int a, int b)
{
    return ((a % b) + b) % b;
}

int main()
{
    int tgl, bln, thn;
    int kabisat, idx;
    int kodeHari, kodePasaran;

    char *namaHari[7]    = {"Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
    char *namaPasaran[5] = {"Legi", "Pahing", "Pon", "Wage", "Kliwon"};

    /* Tabel kode bulan. Baris 0 = tahun biasa, baris 1 = tahun kabisat.
       Urutan kolom: Jan Feb Mar Apr Mei Jun Jul Agt Sep Okt Nop Des
       (hanya Jan dan Feb yang berbeda antara tahun biasa dan kabisat) */
    int kodeBulanHari[2][12] = {
        {6, 3, 3, 0, 5, 2, 0, 4, 1, 6, 3, 1},
        {0, 4, 3, 0, 5, 2, 0, 4, 1, 6, 3, 1}
    };
    int kodeBulanPasaran[2][12] = {
        {0, 4, 1, 0, 0, 4, 4, 3, 2, 2, 1, 1},
        {1, 0, 1, 0, 0, 4, 4, 3, 2, 2, 1, 1}
    };

    printf("Masukkan tanggal (dd-mm-yy) : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    if (bln < 1 || bln > 12 || tgl < 1 || tgl > 31 || thn < 0 || thn > 99)
    {
        printf("Input tidak valid.\n");
        return 1;
    }

    kabisat = (thn % 4 == 0 && thn != 0) ? 1 : 0;
    idx = bln - 1;

    kodeHari    = mod(tgl + thn + thn / 4 - kodeBulanHari[kabisat][idx], 7);
    kodePasaran = mod(tgl + thn / 4 - kodeBulanPasaran[kabisat][idx], 5);

    printf("Tanggal tersebut adalah hari %s %s.\n",
           namaHari[kodeHari], namaPasaran[kodePasaran]);

    return 0;
}