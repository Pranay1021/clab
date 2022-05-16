#include <stdio.h>
int sum(int);

int sum(int a){
    int i,num1=1,num2=1,num3;
    if(a==(1||2)){
        return 1;
    }
    else{
        for(i=1;i<=a-2;i++){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        }
    }
    return num3;
}
int main(){
 int a,b;
 printf("input a number: ");
 scanf("%d",&a);
 b=sum(a);
 printf("%d",b);
}