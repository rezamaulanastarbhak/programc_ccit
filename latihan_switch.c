// tarif parkir sesuai dengan jenis kendaraan 
// kode M untuk Motor tarif/jam adalah 2000
// kode B untuk Bus tarif/jam adalah 5000
// kode L untuk Mobil tarif/jam adalah 3000
// kode T untuk Truk tarif/jam adalah 3000

// input kode kendaraan dan lama parkir /jam
// hasil adalah total harga parkir 
#include <stdio.h>
int main()
{
    char kode;
    int lama_parkir, tarif, total;
    printf("Masukkan kode kendaraan (M/B/L/T): ");
    scanf("%c", &kode);
    if (kode != 'M' && kode != 'm' && kode != 'B' && kode != 'b' && kode != 'L' && kode != 'l' && kode != 'T' && kode != 't') {
        printf("Kode kendaraan tidak valid\n");
        return 1; // Exit the program with an error code
    }
    printf("Masukkan lama parkir (jam): ");
    scanf("%d", &lama_parkir);
    switch (kode){
        case 'M' :
        case 'm' :
            tarif = 2000;
            break;
        case 'B' :
        case 'b' :
            tarif = 5000;
            break;
        case 'L' :
        case 'l' :
            tarif = 3000;
            break;
        case 'T' :
        case 't' :
            tarif = 3000;
            break;
        }
    total = tarif * lama_parkir; //3000 * 2 = 6000
    printf("Total harga parkir: %d\n", total);
    return 0;
}