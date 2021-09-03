#include<stdio.h>
int main(){
    int age;
    printf("Age = ");
    scanf("%d",&age);
    if(age<18){
        printf("Not eligible for vote");
    }
    else{
        printf("Eligible for vote");
    }
    return 0;
}