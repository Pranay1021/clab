#include <stdio.h>
void func(int no,char b){
    int i,j;
    for(i=no;i>0;i--){
        for(j=0;j<i;j++){
            printf("%c",b);
        }
        printf("\n");
    }
}
void func1(int n,char a){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=n;j>i;j--){
              printf("%c",a);
        }
        printf("\n");
    }
}

int main(){
    
    func(4,'*');
    printf("ABC \n");
    func(3,'#');
    printf("DEF \n");
    func1(3,'=');
    printf("PQR \n");
    func1(2,'*');

    
}