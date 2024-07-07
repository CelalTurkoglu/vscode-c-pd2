#include <stdio.h>
int main()
{
// kullanıcıdan 3 sayı alıp en büyüğünü bulma
int a,b,c;

    printf("3 adet sayı girin!\n");
    scanf("%d%d%d", &a, &b, &c);
        if (a>b && a>c)
        {
            printf("%d sayısı en büyüktür", a);

        }
        else if(b>a && b>c)
        {
            printf("%d sayısı en büyüktür", b);

        }
        else if (c>a && c>b)
        {
            printf("%d sayısı en büyüktür", c);
        }
        else
        {
            printf("sayılar birbirine eşittir");
        }

return 0;
}