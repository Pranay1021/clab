//series 1/1!+1/3!+2/5!+3/7!
#include <stdio.h>
int fact(int);
int fact(int d)
    {
        int i,b=1;
        for(i=1;i<=d;i++){
        b=i*b;
        }
    
    return b;}
int main(){
    int i,j,a,b,c,num1=1,num2=1,num3,total=0;
    
        for(j=1,i=1;j<=6,i<11;j++,i+=2){
            
            if(j<3){
                printf("%d/%d + ",1,fact(i));
            }

            else{
                num3=num1+num2;
                num1=num2;
                num2=num3;
                printf("%d/%d + ",num3,fact(i));
                }

            
            }
}