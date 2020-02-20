#include <stdio.h>
#include <stdlib.h>
int main()
{

float a,b,c,d;
printf ("\n digite um numero");
scanf("%f",&a);
printf("\n digite 1para soma 2 para subtracao 3 para multiplicao 4 para divisao ");
scanf("%f",&b);
printf("\n digite outro numero");
scanf ("%f",&c);
if(b==1)
        {       
           d= a+c;
           printf ("resultado da soma = %f",d);
        }
if(b==2)
        {       
           d= a-c;
           printf ("resultado da subtracao = %f",d);
        }
system("PAUSE");
}

