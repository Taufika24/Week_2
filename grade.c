#include <stdio.h>
int main()
{
    float p;
    printf("Enter percentage\n");
    scanf("%f", &p);
    if (p >= 90)
    printf("Grade A");
     else if (p < 90 && p >= 80)
        printf("Grade B");
     else if (p < 80 && p >=70) 
        printf("Grade C");
     else if (p < 70 && p >= 60) 
        printf("Grade D");
     else if (p < 60 && p >= 40) 
        printf("Grade E");
    else 
        printf("Grade F");
}
