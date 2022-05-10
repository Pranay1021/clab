//reverse a string
#include <stdio.h>
int main(){
    int i,j,temp;
    char a[5]="ABCD";
    for(i=0,j=3;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        

    }
for(i=0;i<5;i++){
    printf("%c",a[i]);    
}

}