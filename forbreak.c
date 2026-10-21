#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i++){
       if(i%3==0 && i%5==0){
            printf("Berhenti print karena angka habis dibagi 3 dan 5\n");
            break;
        }else if(i%3==0){
            printf("CCIT\n");
        }else if(i%5==0){
            printf("FSD\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}

// print angka 1 - 100
// jika angka habis dibagi 3 maka print "CCIT"
// jika angka habis di bagi 5 maka print "FSD"
// berhenti print jika angka habis di bagi 3 dan 5