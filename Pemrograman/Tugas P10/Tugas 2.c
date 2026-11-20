#include <stdio.h>
#include <stdlib.h>

struct waktu {
    int jam;
    int menit;
    int detik;
};

int waktuKeDetik(struct waktu w) {
    return (w.jam + 3600) + (w.menit * 60) + w.detik;
}

struct waktu detikKeWaktu(int totalDetik) {
    struct waktu w;
    w.jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    w.menit = sisaDetik / 60;
    w.detik = sisaDetik % 60;
    return w;
}

struct waktu hitungSelisih(struct waktu w1, struct waktu w2) {
    int detik1 = waktuKeDetik(w1);
    int detik2 = waktuKeDetik(w2);
    
    // Hitung selisih mutlak dalam detik
    int selisihDetik = abs(detik2 - detik1);
    
    return detikKeWaktu(selisihDetik);
}

int main() {
    struct waktu w1, w2, selisih;
    // Input Waktu 1 (format hh:mm:ss)
    printf("Waktu 1: ");
    if (scanf("%d:%d:%d", &w1.jam, &w1.menit, &w1.detik) != 3) {
        printf("Format input salah! Gunakan format jj:mm:dd (contoh: 08:30:00)\n");
        return 1;
    }
    // Input Waktu 2 (format hh:mm:ss)
    printf("Waktu 2: ");
    if (scanf("%d:%d:%d", &w2.jam, &w2.menit, &w2.detik) != 3) {
        printf("Format input salah! Gunakan format jj:mm:dd (contoh: 11:37:19)\n");
        return 1;
    }
    // Menghitung selisih
    selisih = hitungSelisih(w1, w2);
    // Tampilkan hasil
    printf("Selisih Waktu = %d Jam %d Menit %d Detik\n", 
           selisih.jam, selisih.menit, selisih.detik);
    return 0;
}