//factorial
#include <stdio.h>
int fact(int d)
    {
        int i,b=1;
        for(i=1;i<=d;i++){
        b=i*b;
        }
    return b;}
int main(){
    int a,c;
    printf("input a number: ");
    scanf("%d",&c);
    a=fact(c);
    
    printf("the factorial of %d is %d",c,a);
}