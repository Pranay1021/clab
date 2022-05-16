//no of words
#include <stdio.h>
int main(){
    int i,count=0;
    char a[100]="My name is pranay shah";
    for(i=0;a[i]!='\0';i++){
     if(a[i]==' '){
         count++;
     }
     else{
         continue;
     }
 }
count++;
printf("your sentence is %s \n",a);
printf(" the no of words are %d",count);
}
