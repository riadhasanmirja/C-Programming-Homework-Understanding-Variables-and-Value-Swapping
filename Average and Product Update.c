#include <stdio.h>

int main() 
{
    float a;
    float b;
    
    printf ("Enter Your Value a = ");
    scanf  ("%d",&a);
    
    printf ("Enter Your Value b = ");
    scanf ("%f",&b);

    float average = (a + b)/2.0;
    float product = a*b;
    
    printf ("Average is %.3f\n",average);
    // %.3f means no more calculations after 3 decimal places
    printf ("Product is %.4f",product);
    // %.4f means no more calculations after 4 decimal places
    
    return 0;
}
