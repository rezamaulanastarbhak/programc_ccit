#include <stdio.h>
#define PI 3.14159

/* ===== FUNCTION ===== */
float luasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

float luasPersegi(float sisi) {
    return sisi * sisi;
}

float luasLingkaran(float jariJari) {
    return PI * jariJari * jariJari;
}

void tampilMenu() {
    printf("\n=== MENU LUAS BANGUN DATAR ===\n");
    printf("1. Luas Segitiga\n");
    printf("2. Luas Persegi\n");
    printf("3. Luas Lingkaran\n");
    printf("0. Keluar\n");
    printf("Pilih menu: ");
}

int main() {
    int pilih;
    float alas, tinggi, sisi, jariJari;

    do {
        tampilMenu();
        scanf("%d", &pilih);

        /* ===== SWITCH CASE ===== */
        switch (pilih) {
            case 1:
                printf("\n-- Luas Segitiga --\n");
                printf("Masukkan alas   : ");
                scanf("%f", &alas);
                printf("Masukkan tinggi : ");
                scanf("%f", &tinggi);
                printf("Luas segitiga = %.2f\n", luasSegitiga(alas, tinggi));
                break;

            case 2:
                printf("\n-- Luas Persegi --\n");
                printf("Masukkan panjang sisi : ");
                scanf("%f", &sisi);
                printf("Luas persegi = %.2f\n", luasPersegi(sisi));
                break;

            case 3:
                printf("\n-- Luas Lingkaran --\n");
                printf("Masukkan jari-jari : ");
                scanf("%f", &jariJari);
                printf("Luas lingkaran = %.2f\n", luasLingkaran(jariJari));
                break;

            case 0:
                printf("\nTerima kasih, program selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid, coba lagi.\n");
        }
    } while (pilih != 0);

    return 0;
}