#include <stdio.h>
void disp(int *b,int x,int y);
int main(){
    int a[5]={2,3,5,5,5};
    printf("your digits are :");
    disp(a,1,5);

}
void disp(int *b,int x,int y){
    if(x>y){
        return;
    }
    int a=*b;
    printf("%d ",a);
    x++;
    disp(b+1,x,y);
}
    