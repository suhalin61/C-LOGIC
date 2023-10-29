#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of abc");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c&&a==c)
    {
        printf("your triangle is equivalent");
    }
    else if (a==c&&b!=a)
    {
     printf("your triangle is isolation");

    }
    else if (b==c&&a!=b)
    {
     printf("your triangle is isolation");

    }
    else{
        printf("your triangle is scailainig");
    }
}