#include <stdio.h>
#include <stdlib.h>

int topla(int sayi)
{
    if(sayi==1)
    {
        return 1;
    }
    else 
    {
        return sayi+topla(sayi-1);
    }
}
// klavyeden girilen n sayısına kadar olan sayıları toplama
int main()
{
    int n;
    printf("bir sayı gir: ");
    scanf("%d",&n);
    printf("toplam sonucu; %d",topla(n));
    
    return 0;

}