#include <stdio.h>
int main()
{
    char huruf;
    printf("Masukkan huruf: ");
    scanf("%c", &huruf);
    switch (huruf){
        case 'a' :
        case 'A' :
        case 'i' :
        case 'I' :
        case 'u' :
        case 'U' :
        case 'e' :
        case 'E' :
        case 'o' :
        case 'O' : 
            printf("Anda memasukkan huruf Vokal");
            break;
        default :
            printf("Anda memasukkan huruf konsonan");
    }
    return 0;
}