#include <stdio.h>
#include <conio.h>

void main() {
    float h_cpu, h_ram, h_board;
    float harga_cpu, harga_ram, harga_board;

    h_cpu = 4530000;
    h_ram = 2795000;
    h_board = 4940000;

    harga_cpu = h_cpu - h_cpu * 0.15;
    harga_ram = h_ram - h_ram * 0.08;
    harga_board = h_board - h_board * 0.10;

    printf("%-2s %-35s %15s %8s %15s\n",
           "No", "Nama Barang", "Harga Barang", "Diskon", "Harga Total");

    printf("%-2d %-35s %15.2f %7.0f%% %15.2f\n",
        1, "CPU Intel Core Ultra 7 270k Plus", h_cpu, 15.0, harga_cpu);
    printf("%-2d %-35s %15.2f %7.0f%% %15.2f\n",
        2, "RAM DDR5", h_ram, 8.0, harga_ram);
    printf("%-2d %-35s %15.2f %7.0f%% %15.2f\n",
        3, "Mainboard ASUS", h_board, 10.0, harga_board);

    getche();
}