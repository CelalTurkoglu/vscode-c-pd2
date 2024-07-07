#include <stdio.h>
#include <stdlib.h>
//bölme işareti kullanmadan bölme işlemi yapımı rekürsif
int bolum(int bolunen, int bolen)
{
    if(bolen==0)
    {
        return 0;
    }
    else if(bolunen-bolen==0)
    {
        return 1;
    }
    else if(bolunen<bolen)
    {
        return 0;
    }
    else 
    {
        return(1+bolum(bolunen-bolen,bolen));
    }
}

int main()
{
    int a,b;
    printf("bölünen sayıyı gir");
    scanf("%d",&a);
    printf("böleni gir");
    scanf("%d",&b);
    printf("bölüm=%d\n",bolum(a,b));
    printf("kalan=%d",a-(bolum(a,b)*b));

    return 0;
}