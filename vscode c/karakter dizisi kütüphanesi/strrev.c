#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //strrev diziyi tersine çevirir
    //derleyici hatasından dolayı çalışmıyor burda
    char can[100];

    printf("text girin\n");
    scanf("%s", &can);

    printf("girdiğiniz ifade &s\n", can);
    printf("tersi ise %s\n", strrev(can));







    return 0;
}