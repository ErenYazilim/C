    //EREN//
#include <stdio.h>
int main() {
int i = 1;
    int faktoriyel = 1; 
    int sayi;
     
    printf("Hangi Sayinin Faktoriyeli Alinsin? ");
    scanf("%d",&sayi);
     
    for(; i <= sayi; i++)
    {
        faktoriyel *= i;                                      
    }
    printf("%d sayisinin faktoriyeli = %d",sayi, faktoriyel);
}