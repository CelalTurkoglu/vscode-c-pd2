
#include <stdio.h>
int main()
{

    float a,b;
    char op;
    printf("bir operator gir!!\n");
    scanf(" %c", &op);

    printf("iki sayı gir!!!!!\n");
    scanf("%f%f", &a,&b);

    printf("sonuç --->>>>  ");
    switch(op)
    {
        case '+': printf("%f + %f = %f\n",a,b,a+b);
        break;
        case '-': printf("%f - %f = %f\n",a,b,a-b);
        break;
         case '*': printf("%f * %f = %f\n",a,b,a*b);
        break; 
        case '/': printf("%f / %f = %f\n",a,b,a/b);
        break;
        default: printf("!!!HATALI GİRİŞ YAPTIN !!!");
        
    }
    
return 0;
}