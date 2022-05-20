//number of characters
#include <stdio.h>
int letter(char a[]);
int main(){
 char a[15]="i am a god ";
 int ans;
 printf("%s \n",a);
 ans=letter(a);
 printf(" the number of characters in the string are : %d",ans);

}
int letter(char a[]){
 int i,count;
 for(i=0;a[i]!='\0';i++){
     count++;
 }
    return count;
}