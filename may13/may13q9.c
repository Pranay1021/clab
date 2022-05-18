//display digits
#include <stdio.h>
void num(int a);
int main(){
    int a=18745;
    printf("the digits of %d are : ",a);
    num(a);
    

 }
void num(int a){
    int b,c;
    b=a%10;
    c=a/10;
    if(c==0){
        printf("%d ",b);
        return;

        }
    num(c);
    printf("%d ",b);
    
}
    
    
    

