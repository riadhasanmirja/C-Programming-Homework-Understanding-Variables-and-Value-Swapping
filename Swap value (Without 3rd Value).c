#include <stdio.h>
int main()
{
    int a;
    int b;

    printf ("Enter Your Value a = ");
    scanf("%d",&a);

    printf ("Enter Your Value b = ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swaping Value is a = %d, b = %d",a,b);

    return 0;
}
