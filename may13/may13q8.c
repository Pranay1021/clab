//sum of the given number
#include <stdio.h>
int sum(int a);
int main(){
    int a=43125;
    int b=sum(a);
    printf("\n");
    printf("%d",b);
}
int sum(int a){
    int b,c,d;
    if(a==0){
        return 0;
    }
    b=a%10;
    c=a+b;
    d=a/10;
    printf("%d ",b);
    return c+sum(d);
}