#include <stdio.h>

int main() 
{
    int a,b;
    
    printf ("Enter Your Value a = ");
    scanf  ("%d",&a);
    
    printf ("Enter Your Value b = ");
    scanf ("%d",&b);

    int c = a;
    a = b;
    b = c;
    
    printf ("After Swapping Value is a = %d, b = %d",a,b);
    
    return 0;
}
