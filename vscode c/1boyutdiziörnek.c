#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for döngüsüyle kullanıcıdan 3 sayı alıp yazdırmak
/*    int sayilar[3];

    for (int i=0;i<3;i++)
    {
        scanf("%d", &sayilar[i]);
    }
    for (int i=0;i<3;i++)
    {
        printf("%d\n", sayilar[i]);
    } */

    // aynısını while ile yapmak
    int sayilar[3];
    int i=0;
    while (i<3)
    {
        scanf("%d", &sayilar[i]);
        i++;
    }
    i=0;
    while (i<3)
    {
        printf("%d\n", sayilar[i]);
        i++;
    }
    
    //do while yapımı
    do
    {
        scanf("%d", &sayilar[i]);
        i++;
    } while (i<3);
    i=0;
    do
    {
        printf("%d\n", sayilar[i]);
        i++;
    } while (i<3);
        





    return 0;
}