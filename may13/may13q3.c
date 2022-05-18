//reverse the number
#include <stdio.h>
void comp(int a,int *e){
    int b=(a%10);
    int c=(a/10)%10;
    int d=a/100;
    *e=(b*100+c*10+d);
    
}

int main(){
int a,b,c;
printf("enter three digit number " );
scanf("%d",&a);
comp(a,&b);
printf("your reverse is %d",b);

}