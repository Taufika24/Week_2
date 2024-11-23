#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter the 3 sides");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c) 
        printf("It is an equilateral triangle");
     else if ((a == b && b != c) || (a == c && b != a) || (b == c && a != b)) 
        printf("It is an isosceles triangle");
     else 
        printf("It is a scalene triangle");
    
}
