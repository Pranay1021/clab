#include <stdio.h>
int main(){
    printf("input any three numbers: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *d=&a;
    int *e=&b;
    int *f=&c;
    int g=(*d<*e)?(*d<*f)?*d:*f:(*e<*f)?*e:*f;
    printf("your minimum value is %d",g);
}