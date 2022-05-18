//fibonacci and factorial
#include <stdio.h>
int fib(int a);
int fact(int b);
int main(){
    int n,m;
    printf("Input the required fibonacci number: ");
    scanf("%d",&n);
    printf("input the required number for factorial: ");
    scanf("%d",&m);
    int a=fib(n);
    printf("your fibonacci number is %d \n",a);
    int f=fact(m);
    printf("your factorial is %d ",f);
}
int fib(int a){
    int ans;
    int b=a;
    if(b<=2){
        return 1;
    }
    ans=fib(b-1)+fib(b-2);
    return ans;
    }

int fact(int b){
    if(b==1){
        return 1;
    }
    return b*fact(b-1);
}
