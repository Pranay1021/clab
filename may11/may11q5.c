//changing capital to small, small to capital
#include <stdio.h>
void small(int a){
    int b=0,i,c=0;
    for(i=65;i<92;i++){
          if(i==a){
              b=i+32;
              printf("%c",b);
              }
          else{
              continue;
          }  
    }
    for(i=97;i<123;i++){
        if(i==a){
            c=i-32;
            printf("%c",c);
        }
    }
}
int main(){
   int i,b;
   char a[13]="AbCd PkLm nT";
   for(i=0;i<13;i++){
       b=a[i];
       if(b!=' ') small(b);
       else{
           printf(" ");
       }
        
   }
}