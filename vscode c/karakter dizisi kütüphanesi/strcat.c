#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strcat dizileri birleştirir
    char bos[55];

    strcpy(bos,"benim");

    strcat(bos," adim");
    strcat(bos," lebron deil");
    
    printf("%s\n",bos);






    return 0;
}