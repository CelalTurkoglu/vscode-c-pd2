#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strcpy ile dizidekiler başka diziye kopyalanır ama aşağıdaki gibi kopyalanan virgülden sonra olur
    char can[]="başım ağrıyor";
    char canan[100];

    strcpy(canan,can); // canı kopyaladık canana yapıştırdık

    printf("%s",canan);







    return 0;
}