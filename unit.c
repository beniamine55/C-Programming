#include <stdio.h>

int main()

{
        int a;
        float x,A;
        printf("Enter the number of unit consumed: \n");
        scanf("%d",&a);
        if (a>-1 && a<76)
        {
                x=4.19*a;
                A=x+(x*0.04);
               printf("Total bill in taka: %.2f\n",A );
        }
        else if (a>75 && a<201)
        {
                x=5.72*a;
                A=x+(x*0.04);
               printf("Total bill in taka: %.2f\n",A );
        }
        else if (a>200 && a<301)
        {
                x=6*a;
                A=x+(x*0.04);
               printf("Total bill in taka: %.2f\n",A);
        }
        else if (a>300 && a<401)
        {
                x=6.34*a;
                A=x+(x*0.04);
               printf("Total bill in taka: %.2f\n",A );
        }
        else if (a>400 && a<601)
        {
                x=9.94*a;
                A=x+(x*0.04);
               printf("Total bill in taka: %.2f\n",A );
        }
        else
        {
                x=11.46*a;
                A=x+(x*0.04);
                printf("Total bill in taka: %.2f\n",A );
        }
      

        return 0;
}