#include <stdio.h>
int main(){
    int a,b,temp;
    a=5,b=6;
    printf("your numbers are a=%d and b=%d",a,b);
    int *c=&a;
    int *d=&b;

    
    temp=*c;
    *c=*d;
    *d=temp;
    printf("interchanged value is a=%d b=%d",*c,*d);
}