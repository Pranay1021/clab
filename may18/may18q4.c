//following series
#include <stdio.h>
void series(int x,int y){
    if(x+y<50){
        printf("%d",x+y);
        series(y,x+y);

    }
    else{
        return;
    }

}
int main(){
int x=2,y=3;
series(x,y);
}
