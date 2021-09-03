#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("1st number is largest");
    else if(b>a && b>c)
    printf("2nd number is largest");
    else 
    printf("3rd number is largest");
    return 0;
}