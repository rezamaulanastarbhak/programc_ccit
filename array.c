#include <stdio.h>
#define N 5
int main(){
    int nilai[N] = {70, 98, 55, 88, 68};
    int total = 0, maks = nilai[0];
    for (int i = 0; i < N; i++){
        total += nilai[i];
        if (nilai[i]>maks) maks = nilai[i];
    }
    printf("rata rata nilai adalah %.2f \n", (float)total/N);
    printf("nilai tertinggi adalah %d", maks);

    return 0;
}