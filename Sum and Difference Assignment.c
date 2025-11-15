#include <stdio.h>

int main() 
{
    int a,b;
    
    printf ("Enter Your Value a = ");
    scanf  ("%d",&a);
    
    printf ("Enter Your Value b = ");
    scanf ("%d",&b);

    int sum = a + b;
    int difference = a-b;
    
    printf ("Sum is %d\n",sum);
    printf ("Difference is %d",difference);

    return 0;
}
