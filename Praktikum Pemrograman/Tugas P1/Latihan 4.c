#include <stdio.h>

int main() {
    float h_cpu, h_ram, h_board, total_cpu, total_ram, total_board, diskon_cpu, diskon_ram, diskon_board;

    h_cpu = 4530000;
    h_ram = 2795000;
    h_board = 4940000;

    diskon_cpu = h_cpu * 0.15;
    diskon_ram = h_ram * 0.08;
    diskon_board = h_board * 0.10;

    total_cpu = h_cpu - diskon_cpu;
    total_ram = h_ram - diskon_ram;
    total_board = h_board - diskon_board;

    printf("===========================================================================================\n");
    printf("| %-2s | %-35s | %15s | %8s | %15s |\n",
        "No", "Nama Barang", "Harga Barang", "Diskon", "Harga Total");
    printf("===========================================================================================\n");
    printf("| %-2d | %-35s | %15.2f | %7.0f%% | %15.2f |\n",
        1, "CPU Intel Core Ultra 7 270k Plus", h_cpu, 15.0, total_cpu);
    printf("| %-2d | %-35s | %15.2f | %7.0f%% | %15.2f |\n",
        2, "RAM DDR5", h_ram, 8.0, total_ram);
    printf("| %-2d | %-35s | %15.2f | %7.0f%% | %15.2f |\n",
        3, "Mainboard ASUS", h_board, 10.0, total_board);
    printf("===========================================================================================\n");
    return 0;
}