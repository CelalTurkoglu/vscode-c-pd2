#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strcmp() asci kodlardan farkını verir ama ilk harfte bakıyor
    
    int sonuc;
    char can[12]="a";
    char celal[12]="C";

    sonuc=strcmp(can,celal);
    printf("%d\n", sonuc);

    if(sonuc<0)
    {
        printf("celal büyük\n");
    }
    else if(sonuc>0)
    {
        printf("celal küçük\n");
    }
    else
    {
        printf("eşitler\n");
    }



    return 0;
}