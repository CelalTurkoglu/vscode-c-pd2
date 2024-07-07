#include <stdio.h>
#include <stdlib.h>

//FONKSİYON böyle yapılır izle
//eğer fonksiyondan değer çıkmıyorsa bu şekilde void kullan
//void sorgula(int can) yazdığım yere can yerine başka bişe yazsaydım da aşağıdakiyle aynı olurdu

void sorgula(int can)
{
    if(can%2==0)
    {
        printf("sayi çift\n");
    }
    else
    {
        printf("sayi tek\n");
    }

}

int main()
{
    int can;
    printf("sayı gir\n");
    scanf("%d",&can);
    sorgula(can);







    return 0;
}