//display digits in reverse of a number
#include <stdio.h>
int num(int a,int v);
int main(){
    int a=18745;
    int n=1,i;
    printf("the digits of %d are : ",a);
    for(i=a;i!=0;i=i/10){
        n=10*n;
    }
    int q=num(a,n);
    printf("%d",q);
    }
int num(int a,int v){
    int b,c;
    b=a%10;
    c=a/10;
    if(c==0){
        return b;
        }
    v=v/10;
    return num(c,v)+v*b;
    
}
    
    
    

