#include <stdio.h>
int sum(int *a,int n);
int main(){
    int a[5]={1,3,4,4,5};
    int b=sum(a,0);
    printf("%d",b);

}
int sum(int *a,int n){
    if(n>4){
        return 0;
    }
    int b=*(a+n);
    return  b+sum(a,n+1);
}