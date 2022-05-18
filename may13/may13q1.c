//call by refernce and call by value
#include <stdio.h>
void ref(int *b){
    printf("This is a call by reference ");
}
void val( int a){
    printf("This is a call by value");
}
int main(){
    int a;
    val(1);
    printf("\n");
    ref(&a);
}