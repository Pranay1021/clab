#include <stdio.h>
int main(){
    int i;
    int a[5]={1,2,3,4,5};
    int *b=a;
    for(i=0;i<5;i++){
        printf("%d ",*(b+i));
    }
}