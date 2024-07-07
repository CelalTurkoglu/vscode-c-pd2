#include <stdio.h>
#include <stdlib.h>
//FONKSİYON İZLE VE ÖĞREN EZ
//değer dönmesini istediğinde bu şekilde yap
int sorgula(int can)
{
    if(can%2==0)
    {
        return 1;

    }
    else 
    {
        return 0;
    }
}
int main()
{
    int can, sonuc;
    printf("sayı gir\n");
    scanf("%d", &can);
    sonuc=sorgula(can);
    if(sonuc==1)
    {
        printf("sayı çift\n");
    }
    if(sonuc==0)
    {
        printf("sayı tek\n");
    }

    return 0;
}