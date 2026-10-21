#include <stdio.h>

int add(int a, int b);

int main()
{
 int tambah = add(5,10);
 printf("Hasil penjumlahan: %d\n", tambah);
    return 0;
}

int add(int a, int b) {
    return a + b;
}