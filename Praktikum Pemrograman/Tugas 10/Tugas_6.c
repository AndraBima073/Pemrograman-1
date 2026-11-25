#include <stdio.h>
#include <string.h>

#define NAMA_FILE "data_mahasiswa.txt"

// Definisi struktur Mahasiswa
struct Mahasiswa {
    char nim[20];
    char nama[100];
    float ipk;
};

// 1. Menambahkan data mahasiswa menggunakan mode append ("a")
void tambahData() {
    FILE *fp = fopen(NAMA_FILE, "a");
    if (fp == NULL) {
        printf("Gagal membuka atau membuat file %s!\n", NAMA_FILE);
        return;
    }

    struct Mahasiswa mhs;
    printf("\n--- Tambah Data Mahasiswa ---\n");
    printf("NIM  : ");
    fgets(mhs.nim, sizeof(mhs.nim), stdin);
    mhs.nim[strcspn(mhs.nim, "\n")] = '\0';

    printf("Nama : ");
    fgets(mhs.nama, sizeof(mhs.nama), stdin);
    mhs.nama[strcspn(mhs.nama, "\n")] = '\0';

    printf("IPK  : ");
    scanf("%f", &mhs.ipk);
    getchar(); // Membersihkan karakter newline dari buffer

    // Simpan dengan pemisah '|' agar nama yang mengandung spasi tetap terbaca utuh
    fprintf(fp, "%s|%s|%.2f\n", mhs.nim, mhs.nama, mhs.ipk);
    fclose(fp);

    printf("Data berhasil ditambahkan ke file.\n");
}

// 2. Menampilkan seluruh data mahasiswa dengan mode read ("r")
void tampilkanSemuaData() {
    FILE *fp = fopen(NAMA_FILE, "r");
    if (fp == NULL) {
        printf("\nFile belum tersedia atau gagal dibuka. Silakan tambah data terlebih dahulu.\n");
        return;
    }

    struct Mahasiswa mhs;
    int nomor = 0;
    printf("\n--- Daftar Seluruh Mahasiswa ---\n");
    while (fscanf(fp, " %19[^|]|%99[^|]|%f", mhs.nim, mhs.nama, &mhs.ipk) == 3) {
        nomor++;
        printf("%d. NIM: %s | Nama: %s | IPK: %.2f\n", nomor, mhs.nim, mhs.nama, mhs.ipk);
    }

    if (nomor == 0) {
        printf("File masih kosong.\n");
    }

    fclose(fp);
}

// 3. Mencari data mahasiswa berdasarkan NIM
void cariBerdasarkanNIM() {
    FILE *fp = fopen(NAMA_FILE, "r");
    if (fp == NULL) {
        printf("\nFile belum tersedia atau gagal dibuka.\n");
        return;
    }

    char targetNIM[20];
    printf("\nMasukkan NIM yang dicari: ");
    fgets(targetNIM, sizeof(targetNIM), stdin);
    targetNIM[strcspn(targetNIM, "\n")] = '\0';

    struct Mahasiswa mhs;
    int ditemukan = 0;

    while (fscanf(fp, " %19[^|]|%99[^|]|%f", mhs.nim, mhs.nama, &mhs.ipk) == 3) {
        if (strcmp(mhs.nim, targetNIM) == 0) {
            printf("\n[Data Ditemukan]\n");
            printf("NIM  : %s\n", mhs.nim);
            printf("Nama : %s\n", mhs.nama);
            printf("IPK  : %.2f\n", mhs.ipk);
            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan) {
        printf("Mahasiswa dengan NIM \"%s\" tidak ditemukan.\n", targetNIM);
    }

    fclose(fp);
}

int main() {
    int pilihan;

    do {
        printf("\n=== APLIKASI DATA MAHASISWA ===\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Tampilkan Semua Data\n");
        printf("3. Cari Mahasiswa berdasarkan NIM\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        if (scanf("%d", &pilihan) != 1) {
            while (getchar() != '\n'); // Bersihkan input invalid
            pilihan = 0;
        } else {
            getchar(); // Bersihkan newline
        }

        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                tampilkanSemuaData();
                break;
            case 3:
                cariBerdasarkanNIM();
                break;
            case 4:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 4);

    return 0;
}