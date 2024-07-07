
#include <stdio.h>
int main()
{
//1den girilen sayıya kadar olan sayıların toplamını for döngüsüyle hesaplama
    int a,i,toplam;
    toplam=0;
    printf("bir sayı girin\n");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        toplam += i;
    }
    printf("toplam: %d\n", toplam);






return 0;
}