#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strncmp() asci kodlardan farkını verir 
    
    int sonuc;
    char can[12]="abc";
    char celal[12]="CBA";

    sonuc=strncmp(can,celal,3);
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