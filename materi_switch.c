#include <stdio.h>

int main()
{
    int hari = 4;
    switch (hari){
        case 1 : 
            printf("hari senin"); 
            break;
        case 2 : 
        case 4 :
            printf("hari selasa"); 
            break;
        case 3 : 
            printf("Hari Rabu"); 
            break;
        default : printf("angka tidak di kenal");
    }
    return 0;
}