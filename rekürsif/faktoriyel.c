#include <stdio.h>
#include <stdlib.h>
//faktoriyel hesaplama
int fak(int sayi)
{
    int sonuc;
    if(sayi!=0)
    {
        sonuc=sayi*fak(sayi-1);
    }
    else
    {
        sonuc=1;
    }
    return sonuc;
}



int main()
{
    int n;
    printf("sayı gir");
    scanf("%d", &n);
    printf("faktoriyel= %d",fak(n));

    return 0;
}