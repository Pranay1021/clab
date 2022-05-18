//Sum of rows
#include <stdio.h>
int sum(int b[][3],int d);
int main(){
    int i,j;
    int a[3][3]={{7,2,3},
                 {4,2,4},
                 {2,3,4}
                };
    printf("the sum of the rows are: ");
    for(i=0;i<3;i++){ 
        int c=sum(a,i);
        printf("%d ",c);
        }
    
}
int sum(int b[][3],int d){
    int i,j,a,sumrow=0;
    for (i=d;i<3;i++){
        for(j=0;j<3;j++){
            sumrow=b[i][j]+sumrow;
        }
    return sumrow;
    }
    
}