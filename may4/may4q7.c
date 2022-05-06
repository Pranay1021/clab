#include <stdio.h>
int main(){
    int a[10];
    int b=50,i,m,j;
    *(a+4)=b;
    j=1;
    m=0;
    
        for(i=1;i<10;i++){
            if(m==0){ 
                b=b-i;
                *(a+4+j)=b;
                m=1;
                }
            else if(m==1){
                b=b-i;
                *(a+4-j)=b;
                m=0;
                j++;
            }
            
           }
     for(i=0;i<10;i++){
         printf("%d ",*(a+i));
     }   
    
}