//number is divisible by 97 
#include <stdio.h>

int main()
{
    int num;
    int m;

    printf("\n ENTER A NUMBER");
    scanf("%d",&num);
    m=num%97;
    printf("DIVISIBILITY TEST RETURNS: %d",m);
    if(m=0)
    {
        printf("THE NUMBER IS DIVISIBLE BY 97");
    }
    else
    {
        printf("THE NUMBER IS NOT DIVISIBLE BY 97");
    }
    return 0;
}
