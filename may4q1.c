#include <stdio.h>
int main(){
    int a;
    char b;
    float c;
    int *f=&a;
    char *g=&b;
    float  *h=&c;
    scanf("%d%c%f",f,g,h);
    printf("the locations are");
    printf("%p %p %p \n",f,g,h);
    printf(" the data is %d %d %d",a,b,c);
    return 0;
    }       