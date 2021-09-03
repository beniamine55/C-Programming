#include <stdio.h>
int main()
{
    int height;
    printf("Height of person: ");
    scanf("%d",&height);
    if(height<=135)
    printf("The person is Dwarf");
    else if(height<=150)
    printf("The person is Average tall");
    else if(height<=165)
    printf("The person is tall");
    else 
    printf("The person is Abnormal");
}