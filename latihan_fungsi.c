#include <stdio.h>
#include <math.h>
#include <string.h>

// definisi fungsi
int tambah(int a, int b){
    return a + b;
}
int kurang(int a, int b){
    return a - b;
}
int kali(int a, int b){
    return a * b;
}
double bagi(double a, double b){
    return a/b;
}

void garis(){
    printf("================================\n");
}

int main()
{
    // pemanggilan fungsi
    double hasil;
    int hasil2; 
    hasil = pow(7, 2);
    hasil2 = kurang(10, 5);
    printf("Hasil perkalian: %.2f\n", hasil);
    garis();
    printf("hasil pengurangan kedua : %d\n", hasil2);
    return 0;
}

