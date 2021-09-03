#include<stdio.h>
int main(){
    int p, c, m, sum_pcm, sum_pm;
    printf("Enter the three subjects marks: \n");
    scanf("%d%d%d", &p, &c, &m);
    sum_pcm = p + c + m;
    sum_pm = p + m;
    if(m>=65 && p>=55 && c>=50 )
    {
    if(sum_pcm>=190 || sum_pm>=140)
    printf("Eligible for admission");
    else
    printf("Not Eligible for admission");
    }
    else
    printf("Not Eligible for admission");
    return 0;
}
