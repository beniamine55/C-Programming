#include<stdio.h>
int main(){
    int a, b;
    printf("coordinate point is :\t\t");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
    printf("The coordinate point (%d,%d) lies 1st coordinate",a,b);
    else if(a<0 && b>0)
    printf("The coordinate point (%d,%d) lies 2nd coordinate",a,b);
    else if(a<0 && b<0)
    printf("The coordinate point (%d,%d) lies 3rd coordinate",a,b);
    else
    printf("The coordinate point (%d,%d) lies 4th coordinate",a,b);
    return 0;
}