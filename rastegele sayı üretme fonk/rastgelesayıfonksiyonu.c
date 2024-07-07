#include <stdio.h>
#include <stdlib.h> // rand() fonk bu kütüphane içindedir
//rand dolandırıcı çıktı
//aslında rastgele sayı üretmiyor hep aynı şeyleri veriyor enayi
int main(void)
{
    int i;

    for(i=1;i<=20;i++)
    {
        //1 ile 6 arasında rastgele sayı seçme
        printf("%10d", 1+(rand()%6));

        //eğer sayaç 5'in katı ise satır atla
        if(i%5==0)
        {
            printf("\n");
        }
    }

    return 0;


}