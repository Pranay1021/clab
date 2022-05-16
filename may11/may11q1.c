//no of spaces
#include <stdio.h>
int main(){
    int i,count=0;
    char a[100]="My name is pranay";
 for(i=0;a[i]!='\0';i++){
     if(a[i]==' '){
         count++;
     }
     else{
         continue;
     }
 }
printf("your sentence is %s \n",a);
printf(" the no of spaces is %d",count);
}