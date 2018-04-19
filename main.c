#include <stdio.h>
//bla bla
// new comment2
int
main ()
{
    int a, b, c, d, f;
    printf ("Введите два числа\n");
    scanf("%d\n%d", &a, &b);
    c=a+b; 
    d=a-b;
    f=a/b+d;
    printf("%d + %d = %d; %d - %d = %d; %d / %d + %d= %d",a,b,c,a,b,d,a,b,d,f);
 return 0;
}
