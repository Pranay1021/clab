#include <stdio.h>
int main(){
    struct std{
        char name[20];
        int roll;
        int marks1;
    }s1,s2,s3;
    s1={"ram"},1,100};
    s2={{"shyam"},2,80};
    s3={{"hari"},3,45};
    printf("%s%d%d"s1.name,s1.roll,s1.marks1);
    
    }