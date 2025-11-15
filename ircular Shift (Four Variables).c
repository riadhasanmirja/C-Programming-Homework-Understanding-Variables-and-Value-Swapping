#include <stdio.h>

int main() 
{
    int a,b,c,d;
    
    printf ("Enter Your Value a = ");
    scanf  ("%d",&a);
    
    printf ("Enter Your Value b = ");
    scanf ("%d",&b);

    printf ("Enter Your Value c = ");
    scanf  ("%d",&c);
    
    printf ("Enter Your Value d = ");
    scanf  ("%d",&d);
    
    int e = a;
    a = d;
    d = c;
    c = b;
    b = e;
    
    printf ("After Swapping value is a = %d,b = %d,c = %d,d = %d",a,b,c,d);
    
    return 0;
}

