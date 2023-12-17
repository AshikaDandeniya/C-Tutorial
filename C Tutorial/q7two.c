#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x;
   int y;


    // Entering the input x
       printf("Enter the value x:");
       scanf("%f", &x);

    //condition
       y = (x < 0) ? 1 : ((x == 0) ? 0 : -1 );

       printf("Y = %d",y);

    return 0;
}
