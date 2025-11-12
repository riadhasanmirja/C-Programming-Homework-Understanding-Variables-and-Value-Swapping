#include <stdio.h>
int main ()
{
    int X;
    int Y;

    printf ("Enter Your Value X = ");
    scanf("%d",&X);

    printf ("Enter Your Value Y = ");
    scanf("%d",&Y);

    int Z = X;
        X = Y;
        Y = Z;

    printf("Swapping vaalue is X = %d, Y = %d", X,Y,Z);


return 0;
}
