
#include <stdio.h>
int main()
{
    int i;
        for(i=0; i<10; i++)
        {
            if(i==4)
            {
                break;
            }
                printf("%d\n", i);
        }
    printf("burdan devam ediyor\n");

    int a;
        for(a=0;a<20;a++)       //continue kullanarak atlayabiliriz
        {
            if(a==5)
            {
                continue;
            }
            printf("%d\n", a);

        }








return 0;    
}