#include <stdio.h>
#include <stdlib.h>

int carpim(int sayi1, int sayi2)
{
    int sonuc;
    if(sayi2==1)
    {
        sonuc=sayi1;
    }
    else 
    {
        sonuc = sayi1 + carpim(sayi1,sayi2-1);
    }
    return sonuc;
}

int main()
{
    int a,b;
    printf("2 adet sayı gir: ");
    scanf("%d %d", &a, &b);
    printf("%d çarpı %d=%d", a,b,carpim(a,b));
    
    return 0;
}