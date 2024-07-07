

#include <stdio.h>
int main()
{
   //Kullanıcıdan 2 adet sayı ve isminin baş harfini alınız ilk sayım bu
   //2. sayım bu ismimin baş harfi bu şeklinde ekrana yazdır.
    int sayi1;
    float sayi2;
    char harf;

    printf("ilk sayıyı girin\n");
    scanf("%d", &sayi1);

    printf("ikinci sayıyı girin\n");
    scanf("%f", &sayi2);

    printf("istediğiniz bir harfi girin\n");
    scanf(" %c", &harf);


        printf("ilk sayınız: %d ikinci sayınız: %f harfiniz %c\n", sayi1,sayi2,harf);




return 0;
}