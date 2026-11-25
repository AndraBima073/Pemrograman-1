#include <stdio.h>

struct Mahasiswa {
    int nim;
    char nama[40];
    float ipk;
};

int main(void) {
    struct Mahasiswa data[3] = {
    {1001, "Andi", 3.50},
    {1002, "Budi", 3.75},
    {1003, "Citra", 3.90}
    };

    struct Mahasiswa *p = data;
    printf("DAFTAR MAHASISWA\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%d | %s | %.2f\n",
        (p+i)->nim, (p+i)->nama, (p+i)->ipk);
    }

    return 0;
}