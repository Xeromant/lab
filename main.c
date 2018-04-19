#include <stdio.h>
//bla bla
int
main ()
{
    int a, b, c, d;
    printf ("Введите два числа\n");
    scanf("%d\n%d", &a, &b);
    c=a+b; 
    d=a-b;
    printf("%d + %d = %d; %d - %d = %d",a,b,c,a,b,d);
 return 0;
}
