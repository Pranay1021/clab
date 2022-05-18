//maximum and minimum
#include <stdio.h>
int comp(int a,int b,int c,int *d){
    int max=(a>b)?(a>c)?a:c:(b>c)?b:c;
    int min=(a<b)?(a<c)?a:c:(b<c)?b:c;
    *d=max;
    return min;
    
} 
int main(){
    int a,b,c,min,max;
    printf("input three numbers");
    scanf("%d%d%d",&a,&b,&c);
    min=comp(a,b,c,&max);
    printf("the minimum is %d and maximum is %d",min,max);
}