//sum of array
#include <stdio.h>
int f1(int *b){
    int i,temp,sum=0;
    for(i=0;i<5;i++){
        sum=sum+b[i];
        }
    return sum;
    }


int main(){
    int a[5]={1,2,3,4,5};
    int b=f1(a);
    printf("%d",b);
}
