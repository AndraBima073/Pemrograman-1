/*
 * =====================================================
 *  MINI PROJECT 1 - SISTEM RENTAL FILM
 *  Kelompok 3
 *  Menggunakan: Struct, Array, String, Pointer, File
 * =====================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ===== KONSTANTA ===== */
#define MAX_RENTAL   50
#define DENDA_PER_HARI 2000
#define NAMA_FILE    "data_rental.txt"

/* ===== STRUCT ===== */
typedef struct {
    char id[10];
    char nama[50];
    char judulFilm[60];
    char kategori[20];   /* Aksi, Drama, Animasi, Horror, Komedi */
    int  hargaPerHari;
    int  lamaPinjam;
    int  hariKembali;
} Rental;

/* ===== ARRAY GLOBAL ===== */
Rental dataRental[MAX_RENTAL];
int    jumlahRental = 0;

/* ============================================================
 *  FUNGSI UTILITAS
 * ============================================================ */

/* Menentukan harga sewa berdasarkan kategori (string) */
int getHargaKategori(const char *kategori) {
    if (strcmp(kategori, "Aksi")    == 0) return 6000;
    if (strcmp(kategori, "Drama")   == 0) return 4500;
    if (strcmp(kategori, "Animasi") == 0) return 4000;
    if (strcmp(kategori, "Horror")  == 0) return 5000;
    if (strcmp(kategori, "Komedi")  == 0) return 3500;
    return 4000;
}

/* Menghapus newline dari hasil fgets */
void hapusNewline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
}

/* Mencetak garis pemisah */
void cetakGaris(int panjang) {
    int i;
    for (i = 0; i < panjang; i++) printf("-");
    printf("\n");
}

/* ============================================================
 *  MENU 1 — TAMBAH DATA RENTAL
 *  (Mahasiswa 1: Input, validasi, struct, array, pointer)
 * ============================================================ */
void tambahRental() {
    int kat;
    Rental *r;    /* pointer ke elemen array */

    if (jumlahRental >= MAX_RENTAL) {
        printf("  [!] Data rental sudah penuh (%d record).\n", MAX_RENTAL);
        return;
    }

    r = &dataRental[jumlahRental];   /* akses via pointer */

    printf("\n--- Tambah Data Rental ---\n");

    /* ---- ID pelanggan ---- */
    do {
        printf("  ID Pelanggan  : ");
        scanf("%s", r->id);
        /* Cek duplikasi ID */
        int i, duplikat = 0;
        for (i = 0; i < jumlahRental; i++) {
            if (strcmp(dataRental[i].id, r->id) == 0) {
                duplikat = 1;
                break;
            }
        }
        if (duplikat) printf("  [!] ID sudah ada, gunakan ID lain.\n");
        else break;
    } while (1);

    /* ---- Nama pelanggan (string dengan spasi) ---- */
    printf("  Nama Pelanggan: ");
    scanf(" %[^\n]", r->nama);

    /* ---- Judul film (string dengan spasi) ---- */
    printf("  Judul Film    : ");
    scanf(" %[^\n]", r->judulFilm);

    /* ---- Kategori & harga ---- */
    printf("  Kategori Film :\n");
    printf("    1. Aksi    (Rp6.000/hari)\n");
    printf("    2. Drama   (Rp4.500/hari)\n");
    printf("    3. Animasi (Rp4.000/hari)\n");
    printf("    4. Horror  (Rp5.000/hari)\n");
    printf("    5. Komedi  (Rp3.500/hari)\n");
    do {
        printf("  Pilih (1-5)   : ");
        scanf("%d", &kat);
        if (kat >= 1 && kat <= 5) break;
        printf("  [!] Pilihan tidak valid.\n");
    } while (1);

    switch (kat) {
        case 1: strcpy(r->kategori, "Aksi");    break;
        case 2: strcpy(r->kategori, "Drama");   break;
        case 3: strcpy(r->kategori, "Animasi"); break;
        case 4: strcpy(r->kategori, "Horror");  break;
        case 5: strcpy(r->kategori, "Komedi");  break;
    }
    r->hargaPerHari = getHargaKategori(r->kategori);

    /* ---- Lama pinjam ---- */
    do {
        printf("  Lama Pinjam (hari)         : ");
        scanf("%d", &r->lamaPinjam);
        if (r->lamaPinjam > 0) break;
        printf("  [!] Lama pinjam harus > 0.\n");
    } while (1);

    /* ---- Hari kembali ---- */
    do {
        printf("  Dikembalikan pada hari ke- : ");
        scanf("%d", &r->hariKembali);
        if (r->hariKembali > 0) break;
        printf("  [!] Hari kembali harus > 0.\n");
    } while (1);

    jumlahRental++;
    printf("  [v] Data berhasil ditambahkan! (Total: %d record)\n", jumlahRental);
}

/* ============================================================
 *  MENU 2 — TAMPILKAN SEMUA DATA
 *  (Mahasiswa 3: Laporan, pointer)
 * ============================================================ */
void tampilkanSemua() {
    int i;
    if (jumlahRental == 0) {
        printf("  Belum ada data rental.\n");
        return;
    }

    printf("\n");
    cetakGaris(95);
    printf("  %-4s %-8s %-18s %-22s %-8s %8s %5s %7s\n",
           "No", "ID", "Nama Pelanggan", "Judul Film",
           "Kategori", "Harga/hr", "Lama", "Kembali");
    cetakGaris(95);

    for (i = 0; i < jumlahRental; i++) {
        Rental *r = &dataRental[i];   /* akses via pointer */
        printf("  %-4d %-8s %-18s %-22s %-8s %8d %5d %7d\n",
               i + 1, r->id, r->nama, r->judulFilm,
               r->kategori, r->hargaPerHari, r->lamaPinjam, r->hariKembali);
    }
    cetakGaris(95);
    printf("  Total data: %d record\n", jumlahRental);
}

/* ============================================================
 *  MENU 3 — CARI DATA RENTAL (by ID atau Nama)
 *  (Mahasiswa 2: strcmp, pointer)
 * ============================================================ */
void cariRental() {
    char keyword[50];
    int  i, ditemukan = 0;

    printf("\n--- Cari Data Rental ---\n");
    printf("  Masukkan ID atau Nama pelanggan: ");
    scanf(" %[^\n]", keyword);

    for (i = 0; i < jumlahRental; i++) {
        Rental *r = &dataRental[i];

        /* strcmp() untuk pencocokan ID atau Nama */
        if (strcmp(r->id, keyword) == 0 ||
            strcmp(r->nama, keyword) == 0) {

            int biaya = r->hargaPerHari * r->lamaPinjam;
            int denda = (r->hariKembali > r->lamaPinjam)
                        ? (r->hariKembali - r->lamaPinjam) * DENDA_PER_HARI
                        : 0;

            printf("\n  --- Data Ditemukan (#%d) ---\n", ditemukan + 1);
            printf("  ID Pelanggan : %s\n",   r->id);
            printf("  Nama         : %s\n",   r->nama);
            printf("  Judul Film   : %s\n",   r->judulFilm);
            printf("  Kategori     : %s\n",   r->kategori);
            printf("  Harga/hari   : Rp%d\n", r->hargaPerHari);
            printf("  Lama pinjam  : %d hari\n", r->lamaPinjam);
            printf("  Hari kembali : hari ke-%d\n", r->hariKembali);
            printf("  Biaya sewa   : Rp%d\n", biaya);
            printf("  Denda        : Rp%d\n", denda);
            printf("  Total bayar  : Rp%d\n", biaya + denda);
            printf("  Status       : %s\n",
                   r->hariKembali > r->lamaPinjam ? "Terlambat" : "Tepat waktu");
            ditemukan++;
        }
    }

    if (!ditemukan)
        printf("  [!] Data dengan keyword '%s' tidak ditemukan.\n", keyword);
    else
        printf("\n  Ditemukan %d record.\n", ditemukan);
}

/* ============================================================
 *  MENU 4 — HITUNG BIAYA & DENDA
 *  (Mahasiswa 2: Biaya sewa, denda keterlambatan, pointer)
 * ============================================================ */
void hitungBiaya() {
    char keyword[10];
    int  i, idx = -1;

    printf("\n--- Hitung Biaya & Denda ---\n");
    printf("  Masukkan ID pelanggan: ");
    scanf("%s", keyword);

    for (i = 0; i < jumlahRental; i++) {
        if (strcmp(dataRental[i].id, keyword) == 0) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("  [!] Data tidak ditemukan.\n");
        return;
    }

    Rental *r = &dataRental[idx];   /* pointer ke data */
    int biaya = r->hargaPerHari * r->lamaPinjam;
    int denda = (r->hariKembali > r->lamaPinjam)
                ? (r->hariKembali - r->lamaPinjam) * DENDA_PER_HARI
                : 0;

    printf("\n");
    cetakGaris(40);
    printf("       STRUK PEMBAYARAN RENTAL\n");
    cetakGaris(40);
    printf("  ID / Nama    : %s / %s\n",    r->id, r->nama);
    printf("  Film         : %s\n",          r->judulFilm);
    printf("  Kategori     : %s\n",          r->kategori);
    printf("  Harga/hari   : Rp%d\n",       r->hargaPerHari);
    printf("  Lama pinjam  : %d hari\n",    r->lamaPinjam);
    printf("  Hari kembali : hari ke-%d\n", r->hariKembali);
    cetakGaris(40);
    printf("  Biaya sewa   : Rp%d\n",       biaya);
    if (denda > 0)
        printf("  Denda (%d hr): Rp%d\n",
               r->hariKembali - r->lamaPinjam, denda);
    else
        printf("  Denda        : Rp0\n");
    printf("  Total bayar  : Rp%d\n",       biaya + denda);
    printf("  Status       : %s\n",
           r->hariKembali > r->lamaPinjam ? "TERLAMBAT" : "Tepat waktu");
    cetakGaris(40);
}

/* ============================================================
 *  MENU 5 — UBAH LAMA PEMINJAMAN (via pointer)
 *  (Mahasiswa 2: Memanipulasi data via pointer)
 * ============================================================ */
void ubahLamaPinjam() {
    char keyword[10];
    int  i, idx = -1, lamaBarum;

    printf("\n--- Ubah Lama Peminjaman ---\n");
    printf("  Masukkan ID pelanggan: ");
    scanf("%s", keyword);

    for (i = 0; i < jumlahRental; i++) {
        if (strcmp(dataRental[i].id, keyword) == 0) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("  [!] Data tidak ditemukan.\n");
        return;
    }

    Rental *r = &dataRental[idx];   /* pointer untuk mengubah data */
    printf("  Nama pelanggan      : %s\n", r->nama);
    printf("  Film                : %s\n", r->judulFilm);
    printf("  Lama pinjam saat ini: %d hari\n", r->lamaPinjam);

    do {
        printf("  Lama pinjam baru    : ");
        scanf("%d", &lamaBarum);
        if (lamaBarum > 0) break;
        printf("  [!] Harus > 0.\n");
    } while (1);

    r->lamaPinjam = lamaBarum;   /* ubah data via pointer */
    printf("  [v] Lama peminjaman berhasil diperbarui menjadi %d hari.\n", r->lamaPinjam);
}

/* ============================================================
 *  MENU 6 — REKAP LAPORAN
 *  (Mahasiswa 3: Rekap total film & pendapatan)
 * ============================================================ */
void rekapLaporan() {
    int i, totalPendapatan = 0, totalDenda = 0;
    int terlambat = 0, tepatWaktu = 0;

    if (jumlahRental == 0) {
        printf("  Belum ada data rental.\n");
        return;
    }

    printf("\n");
    cetakGaris(50);
    printf("         REKAP LAPORAN RENTAL FILM\n");
    cetakGaris(50);
    printf("  %-20s %12s %10s\n", "Film", "Biaya", "Denda");
    cetakGaris(50);

    for (i = 0; i < jumlahRental; i++) {
        Rental *r = &dataRental[i];
        int biaya = r->hargaPerHari * r->lamaPinjam;
        int denda = (r->hariKembali > r->lamaPinjam)
                    ? (r->hariKembali - r->lamaPinjam) * DENDA_PER_HARI
                    : 0;

        printf("  %-20s %12d %10d\n", r->judulFilm, biaya, denda);
        totalPendapatan += biaya;
        totalDenda      += denda;
        if (denda > 0) terlambat++; else tepatWaktu++;
    }

    cetakGaris(50);
    printf("  Total film disewa    : %d record\n",    jumlahRental);
    printf("  Tepat waktu          : %d rental\n",    tepatWaktu);
    printf("  Terlambat            : %d rental\n",    terlambat);
    printf("  Total pendapatan sewa: Rp%d\n",         totalPendapatan);
    printf("  Total denda          : Rp%d\n",         totalDenda);
    printf("  Total keseluruhan    : Rp%d\n",         totalPendapatan + totalDenda);
    cetakGaris(50);
}

/* ============================================================
 *  MENU 7 — SIMPAN DATA KE FILE
 *  (Mahasiswa 3: Operasi tulis file)
 * ============================================================ */
void simpanKeFile() {
    int i;
    FILE *fp = fopen(NAMA_FILE, "w");
    if (!fp) {
        printf("  [!] Gagal membuka file untuk ditulis.\n");
        return;
    }

    fprintf(fp, "%d\n", jumlahRental);
    for (i = 0; i < jumlahRental; i++) {
        Rental *r = &dataRental[i];
        fprintf(fp, "%s\n%s\n%s\n%s\n%d\n%d\n%d\n",
                r->id, r->nama, r->judulFilm, r->kategori,
                r->hargaPerHari, r->lamaPinjam, r->hariKembali);
    }

    fclose(fp);
    printf("  [v] Data berhasil disimpan ke '%s' (%d record).\n",
           NAMA_FILE, jumlahRental);
}

/* ============================================================
 *  MENU 8 — BACA DATA DARI FILE
 *  (Mahasiswa 3: Operasi baca file)
 * ============================================================ */
void bacaDariFile() {
    int i, n;
    FILE *fp = fopen(NAMA_FILE, "r");
    if (!fp) {
        /* File belum ada — wajar saat pertama kali */
        return;
    }

    if (fscanf(fp, "%d\n", &n) != 1 || n <= 0 || n > MAX_RENTAL) {
        fclose(fp);
        return;
    }

    for (i = 0; i < n; i++) {
        Rental *r = &dataRental[i];
        fgets(r->id,         sizeof(r->id),         fp); hapusNewline(r->id);
        fgets(r->nama,       sizeof(r->nama),        fp); hapusNewline(r->nama);
        fgets(r->judulFilm,  sizeof(r->judulFilm),   fp); hapusNewline(r->judulFilm);
        fgets(r->kategori,   sizeof(r->kategori),    fp); hapusNewline(r->kategori);
        fscanf(fp, "%d\n%d\n%d\n",
               &r->hargaPerHari, &r->lamaPinjam, &r->hariKembali);
    }

    jumlahRental = n;
    fclose(fp);
    printf("  [v] %d record dimuat dari '%s'.\n", jumlahRental, NAMA_FILE);
}

/* ============================================================
 *  FUNGSI INISIALISASI — 10 Data Sampel
 * ============================================================ */
void isiDataSampel() {
    /* Hanya dijalankan jika belum ada data */
    if (jumlahRental > 0) return;

    /* Daftar data: id, nama, judul, kategori, harga, lama, kembali */
    struct { char *id, *nama, *judul, *kat; int lama, kembali; } s[] = {
        {"P001","Andi Saputra",   "Avengers: Endgame",       "Aksi",    3,  3},
        {"P002","Budi Santoso",   "Spider-Man: No Way Home", "Aksi",    2,  4},
        {"P003","Citra Dewi",     "Interstellar",            "Drama",   5,  5},
        {"P004","Dian Rahayu",    "Your Name",               "Animasi", 2,  2},
        {"P005","Eko Prasetyo",   "Inception",               "Aksi",    4,  6},
        {"P006","Fajar Nugroho",  "Frozen II",               "Animasi", 3,  3},
        {"P007","Gita Lestari",   "Conjuring 3",             "Horror",  2,  2},
        {"P008","Hendra Wijaya",  "Parasite",                "Drama",   3,  5},
        {"P009","Indah Permata",  "Ngeri-Ngeri Sedap",       "Komedi",  4,  4},
        {"P010","Joko Susilo",    "KKN di Desa Penari",      "Horror",  2,  3}
    };

    int i, total = 10;
    for (i = 0; i < total; i++) {
        Rental *r = &dataRental[i];       /* pointer */
        strcpy(r->id,        s[i].id);
        strcpy(r->nama,      s[i].nama);
        strcpy(r->judulFilm, s[i].judul);
        strcpy(r->kategori,  s[i].kat);
        r->hargaPerHari = getHargaKategori(r->kategori);
        r->lamaPinjam   = s[i].lama;
        r->hariKembali  = s[i].kembali;
    }
    jumlahRental = total;
    printf("  [v] 10 data sampel berhasil dimuat.\n");
}

/* ============================================================
 *  MAIN
 * ============================================================ */
int main() {
    int pilih;

    printf("=========================================\n");
    printf("     SISTEM RENTAL FILM — Kelompok 3     \n");
    printf("=========================================\n");

    /* Coba baca dari file; jika kosong, isi data sampel */
    bacaDariFile();
    isiDataSampel();

    do {
        printf("\n========= MENU UTAMA =========\n");
        printf("  1. Tambah Data Rental\n");
        printf("  2. Tampilkan Semua Data\n");
        printf("  3. Cari Data Rental\n");
        printf("  4. Hitung Biaya & Denda\n");
        printf("  5. Ubah Lama Peminjaman\n");
        printf("  6. Rekap Laporan\n");
        printf("  7. Simpan Data ke File\n");
        printf("  8. Muat Data dari File\n");
        printf("  0. Keluar\n");
        printf("==============================\n");
        printf("  Pilihan: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1: tambahRental();   break;
            case 2: tampilkanSemua(); break;
            case 3: cariRental();     break;
            case 4: hitungBiaya();    break;
            case 5: ubahLamaPinjam(); break;
            case 6: rekapLaporan();   break;
            case 7: simpanKeFile();   break;
            case 8:
                jumlahRental = 0;
                bacaDariFile();
                break;
            case 0:
                simpanKeFile();
                printf("\n  Terima kasih! Data tersimpan.\n");
                break;
            default:
                printf("  [!] Pilihan tidak valid.\n");
        }

    } while (pilih != 0);

    return 0;
}