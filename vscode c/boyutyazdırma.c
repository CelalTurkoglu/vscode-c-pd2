
#include <stdio.h>
int main()
{
    /*değişkenlerin bellekte ne kadar yer kapladığı
     bu şekilde yazdırılabilir*/
    int tamsayi=15;
    float ondalik=3.18;
    double doublesayi=2.678;
    char karakter='s';

    printf("%d\n", sizeof(tamsayi));
    printf("%d\n", sizeof(char));
    printf("float hafızada %d byte yer kaplar\n", sizeof(ondalik));
    printf("double hafızada %d byte yer kapla\n",sizeof(doublesayi));
    
return 0;
}