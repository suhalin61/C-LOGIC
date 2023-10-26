#include <stdio.h>

int main()
{
    int a,b,c;
    printf("swap the number ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swap number %d %d",a,b);
}
