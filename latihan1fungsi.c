#include <stdio.h>
char* isGenap(int x){
    if (x%2==0) return "Genap";
    else return "Ganjil";
}
int main(){
    int n;
    printf("masukkan angka : ");
    scanf("%d", &n);
    printf("angka %d adalah %s",n,isGenap(n));
    return 0;
}