#include <stdio.h>
int main()
{
   int a,b,c;
   printf("enter 3 values");
   scanf("%d%d%d" ,&a,&b,&c);
   if(a==b)
   {
       if(b==c)
       {
          printf("The numbers are equal");
       }
       else 
       printf("The numbers are not equal");
   }
    else 
    printf("The numbers are not equal");
}
