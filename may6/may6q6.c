#include <stdio.h>
int main(){
    int i,j;
    char a[6]="ABCPD";
for(i=0;i<5;i++){
    printf("%s",a+i);
    printf("\n");
    }
for(i=4;i>=0;i--){
    printf("%s",a+i);
    printf("\n");
}
}