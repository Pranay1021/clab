#include <stdio.h>
int main(){

    int a[5]={1,2,3,4,5};
    int i,j,temp;
    
    for(i=0,j=4;i<j;i++,j--){
        temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
    }
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));
    }
}