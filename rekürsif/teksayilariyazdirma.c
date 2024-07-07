#include <stdio.h>
#include <stdlib.h>
/*klayyeden girilen n sayısına kadar olan
tek sayıları ekrana yazdıran rekürsif */
void tek(int ilk, int son)
{
    if(ilk<=son)
    {
        printf("%d\n",ilk);
        tek(ilk+2,son);
    }
}

int main()
{
    int n,duzeltme;
    printf("bir sayı gir ");
    scanf("%d",&n);
    if(n%2==1)
    {
        duzeltme=n;
    }
    else
    {
        duzeltme=n-1;
    }
    tek(1,duzeltme);

    return 0;
}