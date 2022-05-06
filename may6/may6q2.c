#include <stdio.h>
int main(){
    int i,j,k,temp;
    int a[4][4]={
              {1,2,0,0},
              {3,4,0,0},
              {0,0,9,10},
              {0,0,8,6}};
    
    printf("before swapping:");       
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }   
    
    for(i=0;i<2;i++){
         for(j=0;j<2;j++){
             temp=a[i][j];
             a[i][j]=a[i+2][j+2];
             a[i+2][j+2]=temp;
         }
         }
    printf("After swapping: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }   
    }
