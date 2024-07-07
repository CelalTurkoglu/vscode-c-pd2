#include <stdio.h>
#include <stdlib.h>
//gerçek rastgele sayı üretme fonk falan filan
//en alttaki notu da oku 
int main(void)
{
    int i;
    unsigned seed;

    printf("enter seed: ");
    scanf("%u", &seed); //%u for unsigned

    srand(seed); // seed random number generator

    for(i=1;i<=10;i++)
    {
        //pick a random number from 1 to 6 and output it
        printf("%10d", 1+(rand()%6));
        //if counter is divisible by 5, begin a new line 
        if(i%5==0)
        {
            printf("\n");
        }
    }
    return 0;
} /*her seferinde seed değeri girmeden rasgele sayı üretmek için
srand(time(NULL));
sistem saati otomatik olarak seed değeri elde etmek için kullanır
time fonksiyonu 1970 ocak ayı gece yarısından itibaren kaç saniye geçtiğini
döndürür.
time fonksiyonu için <time.h> kütüphanesi kullanılır*/ 