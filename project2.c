#include <stdio.h>
#include <string.h>

#define PI 3.14159
#define MAX 100   /* maksimal riwayat percobaan */

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
    float alas, tinggi, sisi, jariJari, luas;

    /* ===== ARRAY ===== */
    char nama[50];            /* nama pengguna */
    char jenis[MAX][20];      /* nama bangun yang dihitung */
    char masukan[MAX][50];    /* nilai input (alas, tinggi, dll) */
    float hasil[MAX];         /* hasil luas */
    int jumlah = 0;           /* jumlah percobaan */

    /* input nama di awal program */
    printf("Masukkan nama Anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';   /* hapus enter di akhir nama */

    printf("\nHalo, %s! Selamat datang.\n", nama);

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
                luas = luasSegitiga(alas, tinggi);
                printf("Luas segitiga = %.2f\n", luas);

                if (jumlah < MAX) {
                    strcpy(jenis[jumlah], "Segitiga");
                    snprintf(masukan[jumlah], sizeof(masukan[jumlah]),
                             "alas=%.2f, tinggi=%.2f", alas, tinggi);
                    hasil[jumlah] = luas;
                    jumlah++;
                } else {
                    printf("(Riwayat penuh, hasil tidak disimpan)\n");
                }
                break;

            case 2:
                printf("\n-- Luas Persegi --\n");
                printf("Masukkan panjang sisi : ");
                scanf("%f", &sisi);
                luas = luasPersegi(sisi);
                printf("Luas persegi = %.2f\n", luas);

                if (jumlah < MAX) {
                    strcpy(jenis[jumlah], "Persegi");
                    snprintf(masukan[jumlah], sizeof(masukan[jumlah]),
                             "sisi=%.2f", sisi);
                    hasil[jumlah] = luas;
                    jumlah++;
                } else {
                    printf("(Riwayat penuh, hasil tidak disimpan)\n");
                }
                break;

            case 3:
                printf("\n-- Luas Lingkaran --\n");
                printf("Masukkan jari-jari : ");
                scanf("%f", &jariJari);
                luas = luasLingkaran(jariJari);
                printf("Luas lingkaran = %.2f\n", luas);

                if (jumlah < MAX) {
                    strcpy(jenis[jumlah], "Lingkaran");
                    snprintf(masukan[jumlah], sizeof(masukan[jumlah]),
                             "jari-jari=%.2f", jariJari);
                    hasil[jumlah] = luas;
                    jumlah++;
                } else {
                    printf("(Riwayat penuh, hasil tidak disimpan)\n");
                }
                break;

            case 0:
                printf("\nTerima kasih, program selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid, coba lagi.\n");
        }
    } while (pilih != 0);

    /* ===== CETAK RINGKASAN SETELAH SELESAI ===== */
    printf("\n==============================\n");
    printf("        RINGKASAN\n");
    printf("==============================\n");
    printf("Nama pengguna    : %s\n", nama);
    printf("Jumlah percobaan : %d kali\n", jumlah);

    if (jumlah > 0) {
        printf("\nDetail perhitungan:\n");
        for (int i = 0; i < jumlah; i++) {
            printf("%d. %-10s | %-28s | Luas = %.2f\n",
                   i + 1, jenis[i], masukan[i], hasil[i]);
        }
    } else {
        printf("\nBelum ada perhitungan yang dilakukan.\n");
    }

    return 0;
}