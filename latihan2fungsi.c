#include <stdio.h>
int mask3(int x, int y, int z){
    if (x > y && x > z) return x;
    else if (y > x && y > z) return y;
    else return z;
}
int main(){
    int x,y,z;
    printf("masukkan angka : ");
    scanf("%d %d %d", &x, &y, &z);
    printf("angka terbesar adalah %d",mask3(x, y, z));
    return 0;
}