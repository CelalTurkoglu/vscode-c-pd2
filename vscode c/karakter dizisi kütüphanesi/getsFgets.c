#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //gets kullanımı scanf gibi ama önerilmiyor
    char name[30];
    printf("adını gir\n");
    gets(name);
    printf("%s\n",name);

//
//fgets kullanımı ilk dizi sonra boyut sonra stdin yazılır
    char isim[35];
    printf("adını gir\n");
    fgets(isim,35,stdin);
    printf("%s\n", isim);






    return 0;
}