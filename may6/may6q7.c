//determinant
#include <stdio.h>
int main(){
    int i,j,a[3][3];
printf("input 9 data for the matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
}
printf("your matrix is:1 \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
        }
    printf("\n");
}                 
int det,a1,a2,a3;
a1=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
a2=a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
a3=a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

det=a1-a2+a3; 

printf("your determinant is %d",det);
}