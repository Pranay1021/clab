#include <stdio.h.>
void reverse(char a[],int n){
    
    if(a[n]=='\0'){
        return;
    }
    char b=*(a+n);
    reverse(a,n+1);
    printf("%c",b);

}

int main(){
    char a[30]="what are you";
    reverse(a,0);
}
