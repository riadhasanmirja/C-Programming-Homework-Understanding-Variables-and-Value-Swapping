#include <stdio.h>

int main() 
{
    int a;
    
    printf ("Enter Your Number : ");
    scanf  ("%d",&a);
    
    int divided = a/100;
    printf ("First math is : %d\n",divided);
    
    int middle = (a/10)%10;
    printf ("Middle math is : %d\n",middle);
    
    int modulo = a%10;
    printf ("last math is : %d\n",modulo);
    
   int d = divided;
   divided = modulo;
   middle = middle;
   modulo = d;
   
   printf ("Swapping Value is :\n divided = %d\n  middle = %d\n modulo = %d",divided,middle,modulo);
   
    return 0;
}
