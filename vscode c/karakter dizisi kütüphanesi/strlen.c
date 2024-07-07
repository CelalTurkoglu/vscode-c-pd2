#include <stdio.h>
#include <string.h>
int main()
{
        //strlen() dizinin kaç karaktere sahip olduğunu söyler en sondaki \0'ı saymaz

    char can[]="aralik";
    printf("karakter dizisinin boyu %d\n",strlen(can));

    //sizeof kaç eleman olduğunu verir
    printf("%d\n", sizeof(can));

    return 0;

}