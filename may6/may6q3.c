#include <stdio.h>
int main(){
    int i,j,sum1=0,sum2=0,sum3=0,sum4=0;
    int a[4][4]={
              {1,2,3,4},
              {3,4,6,7},
              {1,2,9,10},
              {2,3,8,6}
              };
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum1=sum1+a[i][j];
        }
        for(j=2;j<4;j++){
            sum2=sum2+a[i][j];
        }
    }
    for(i=2;i<4;i++){
        for(j=0;j<2;j++){
            sum3=sum3+a[i][j];
        }
        for(j=2;j<4;j++){
            sum4=sum4+a[i][j];
        }
    }
    printf("sum1=%d sum2=%d sum3=%d sum4=%d",sum1,sum2,sum3,sum4);
    

    
}