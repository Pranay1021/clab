#include <stdio.h>
int main(){
    struct std{
        char name[20];
        int roll;
        int marks1;
        int marks2;
        int marks3;
    }s1;
printf("enter a name ");
scanf("%s",s1.name);
printf("enter the roll num ");
scanf("%d",&s1.roll);
printf("input marks of three subjects");
scanf("%d%d%d",&s1.marks1,&s1.marks2,&s1.marks3);
int total=(s1.marks1+s1.marks2+s1.marks3)/3;
printf("The average marks of %s roll %d is %d",s1.name,s1.roll,total);

}