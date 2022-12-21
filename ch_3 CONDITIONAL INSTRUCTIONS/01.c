//WRITE A PROGRAM TO FIND OUT WEATHER A STUDENT IS PASS OR FAIL ; IF IT REQUIRES TOTAL 40% AND ATLEAST 33% IN EACH SUBJECT TO PASS.ASSUME 3 SUBJECTS AND TAKE MARKS AS AN INPUT FROM THE USER 
#include<stdio.h>
int main()
{
    int m,n,o;
    float total;

    printf("ENTER YOUR MARKS FOR PHY");
    scanf("%d",&m);
    printf("ENTER YOUR MARKS FOR CHEM");
    scanf("%d",&n);
    printf("ENTER YOUR MARKS FOR MATHS");
    scanf("%d",&o);
    
    total=((m+n+o/300)*100);

    if(total>=40 && m>=33 && n>=33 && o>=33)
    {
     printf("YOU Pass");
    }
    else
    {
        printf("YOU fail");
    }

    return 0;
}