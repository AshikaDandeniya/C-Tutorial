#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float dicrement,x1,x2,root1,root2;

    printf("Enter the coefficeint a,b and c:");
    scanf("%d %d %d",&a,&b,&c);

    dicrement = b * b - 4*a*c ;


    if ((a == 0) && (b == 0))
        {
        printf("No solution");
        }

    else if (a == 0)
    {
        x1 = (-1*c)/b;

        if(c == 0)
        {
          printf("The solution is 0");
        }
        else
        {
            printf("The solution is %.2f ",x1);
        }
    }


    else if ((b == 0) && (a !=0))
    {
        x2 = sqrt(-c/a);

        if((a > 0) && (c > 0)|| (a < 0) && (c < 0))
        {
            printf("No solutions");
        }

        else if ((a > 0) && (c < 0)|| (a < 0) && (c > 0))
        {
            printf("The Solution is %.2f",x2);
        }
    }


    else if (dicrement < 0)
    {
        printf("No Solutions");
    }

    else
    {

    dicrement = b * b - 4*a*c ;
    root1 = (-b + sqrt(dicrement))/(2*a);
    root2 = (-b - sqrt (dicrement))/(2*a);

    printf("Roots are %.2f & %.2f",root1,root2);

    }


    return 0;
}
