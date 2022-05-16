//reverse a string
#include <stdio.h>

int main(){
    int i,j,l,temp,count=0,k;
    char a[13]="ABC Pk Ltm n";
    printf("%s \n",a);

    for(i=0;a[i]!='\0';i++){
        if(i==count)
            {
                
                for(j=i;a[j]!=' ';j++){
                count++;
                }
            for(k=(count-1),l=i;k>l;l++,k--){
                temp=a[l];
                a[l]=a[k];
                a[k]=temp;

                }
                count++;
        }
        else{
            continue;
        }    
    }
for(i=0;i<14;i++){
    printf("%c",a[i]);
        }
        
}