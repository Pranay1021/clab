#include <stdio.h>
int main(){
    int i,j;
    char a[5]="ABCD";
    for(i=0,j=5;i<j;i++,j--){
        a+i=a+j;
    }
printf("%s",a);
}