#include <stdio.h>
int main(){
    
    int a=10;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
printf("%d",***d);
printf("%d",**c);

}