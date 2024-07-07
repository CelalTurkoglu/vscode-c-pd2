#include <stdio.h>
#include <string.h>

int main()
{
//strupr her şeyi büyük harf yapar
char can[100];

printf("text gir\n");
fgets(can,sizeof(can),stdin);

printf("büyük hali %s\n", strupr(can));







    return 0;
}