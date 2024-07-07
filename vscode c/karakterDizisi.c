#include <stdio.h>
#include <stdlib.h>
int main()
{
    //karakter dizisi

    char celal[]={'c','e','l','a','l','\0'};

    char dizim[]="celaldiyimsenanla";
    char kullanici[100];
    
    printf("%s\n",dizim);
    
    printf("karakter dizisi gir\n");
    scanf("%s", &kullanici);

    printf("\n");
    printf("%s", kullanici);







    return 0;
}