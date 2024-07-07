#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strncpy ile dizidekiler başka diziye kopyalanır ama aşağıdaki gibi kopyalanan virgülden sonra olur
    //strcpyden farkı kaç karakter olcağını yazarsın
    char can[]="basim agriyor";
    char canan[100]="";

    strncpy(canan,can,12); // canı kopyaladık canana yapıştırdık

    printf("%s",canan);







    return 0;
}