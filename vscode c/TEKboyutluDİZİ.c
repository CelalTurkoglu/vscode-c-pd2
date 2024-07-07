
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5]={1,34,54,4,0};

    printf("%d", dizi[2]);
     // tek boyutlu diziler bu şekildedir.
    
    
    int çiftler[10];
    int i;
    for (i=0;i<10;i++)
    {
        çiftler[i]=2*i;
    }
    for (i=0;i<10;i++)
    {
        printf("%d\n",çiftler[i]);
    }
    ///////////////////////////



    int change[5]={12,4,5,64,98765};
    int c;
    
        change[3]=1541;
        change[2]=0;
    for(c=0;c<5;c++)
    {
        printf("%d ", change[c]);
    }                      // bu şekilde dizi elemanı sonradan değiştirilebilir.





return 0;
}