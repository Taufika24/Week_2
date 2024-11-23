#include <stdio.h>
int main()
{
   int unit;
   printf("enter number of units");
   scanf("%d" ,&unit);
   if (unit<100)
        printf("your electricity bill is %d" ,200*unit);
    else if (unit<200 && unit>=100)   
    printf("your electricity bill is %d" ,500*unit);
    else 
    printf("your electricity bill is %d" ,750*unit);
}
