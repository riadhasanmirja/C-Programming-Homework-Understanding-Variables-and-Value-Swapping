#include <stdio.h>

int main() 
{
    int a,b,c;
    
    printf ("Enter Your Value a = ");
    scanf  ("%d",&a);
    
    printf ("Enter Your Value b = ");
    scanf ("%d",&b);

    printf ("Enter Your Value c = ");
    scanf ("%d",&c);
    
    int d = a;
    a = c;
    c = b;
    b = d;
    
    printf ("After Swapping Value is a = %d, b = %d, c = %d",a,b,c);
    
    return 0;
}
