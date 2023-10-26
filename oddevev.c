#include<stdio.h>

int main()
{
    for(int i=1; i<=10;i++){
        if(i%2==0){
            printf("Number is even %d\n", i);
        }
        else{
            printf("Number is odd %d\n", i);
        }
    }
}