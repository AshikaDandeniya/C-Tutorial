#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

     printf("Input the three sides of a triangle:");
     scanf("%d %d %d",&x,&y,&z);

     if ((x*x) + (y*y) == (z*z) || (y*y) + (z*z) == (x*x) || (x*x) + (z*z) == (y*y))
       {

        printf("It is a right angle triangle");
       }
     else
       {
        printf("It is not a right angle triangle");
       }


    return 0;
}
