#include <stdio.h>

int main()
{
    int a,b,c;
    printf("input a");
    scanf("%d",&a);
     printf("input b");
    scanf("%d",&b);
     printf("input c");
    scanf("%d",&c);
    if ((a>b)&&(a>c))
        printf("%d is a is big",a);
    else if((b>a)&&(b>c))
        printf("%d is big",b);
        else
        printf("%d is big",c);
    

    return 0;
}
