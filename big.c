#include <stdio.h>

int main()
{
    int a,b,c;
    clrscr();
    printf("input a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
        printf("%d is a is big",a);
    else if((b>a)&&(b>c))
        printf("%d is big",b);
    else
        printf("%d is big",c);
    getch();
}
