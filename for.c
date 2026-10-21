#include <stdio.h>
int main()
{
    // int i;
    // for(i=0; i<5; i++){
    //     // badan
    //     printf("%d , ", i);
    // }
    // int i = 0;
    // while(i<5){
    //     printf("nama saya valir \n");
    //     i++;
    // }
    int nilai;
    do{
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);
        //menjalankan ini jika benar akan looping lagi, jika salah akan keluar dari looping
        if(nilai < 0 || nilai > 100){
            printf("Nilai tidak valid, masukkan nilai antara 0-100\n");
        }
    }while(nilai < 0 || nilai > 100);
    printf("Nilai yang dimasukkan: %d\n", nilai);
       return 0;
}
// 1. 1, 2, 3, 4, 5
// 2. cetak nama kalian 5 kali
// 3. 1 + 2 + 3 + 4 + 5 = 15
// 4. 100, 98, 96 ... 0
// 5. 1 + 3 + 5 + 7 + 9 = 25