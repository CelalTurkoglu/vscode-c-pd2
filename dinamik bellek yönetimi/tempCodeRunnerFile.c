#include <stdio.h>
#include <string.h>
int main () {
char str[50];
int len;
strcpy(str,
"This is tutorialspoint.com");
len = strlen(str);
printf("Length of |%s| is |%lu|\n", str, strlen(str));
return(0);
}