#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strncat dizileri birleştirir fakat birleştirirken karakter sayısı girilir
    char bos[100];
    char dolu[100]="benim adim lebron değil";

    strncat(bos,dolu,17);
    

    
    printf("%s\n",bos);






    return 0;
}