#include <stdio.h>
int main() 
{
    int m, year;
    printf("Enter month and year");
    scanf("%d%d", &m, &year);
    if (m == 2) 
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("29");
        } 
        else 
        printf("28");
        }
      else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31");
     }
     else 
        printf("30");
}
