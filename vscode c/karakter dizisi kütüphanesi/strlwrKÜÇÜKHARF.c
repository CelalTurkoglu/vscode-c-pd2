#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
int main()
{
//strlwr karakterlerin hepsini küçük yapar
char can[100];

printf("text gir\n");
scanf("%s", &can);

printf("girdiğin ifade &s\n", can);
printf("küçük harf hali %s\n",strlwr(can));








    return 0;
}