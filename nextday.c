#include <stdlib.h>
int main() 
{
    int d, m, y;
    printf("Enter date, month, year: ");
    scanf("%d%d%d", &d, &m, &y);
    if (m == 2) 
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
        {
            if (d == 29) 
            {
                d = 1;
                m = 3;
            } 
            else 
            {
                d = d + 1;
            }
        } 
        else
        {
            if (d == 29)
            {
                printf("Invalid date");
                exit(0);
                
            } 
            else if (d == 28) 
            {
                d = 1;
                m = 3;
            }
            else
            {
                d=d+1;
            }
        }
    }
            else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) 
            {
    if (d == 31)
    {
        d = 1;
        m = m + 1;
    } 
    else
    {
        d = d + 1;
    }
} 
else if (m == 12)
{
    if (d == 31)
    {
        d = 1;
        m = 1;
        y = y + 1;
    } 
    else 
    {
        d = d + 1;
    }
} 
else if (m == 4 || m == 6 || m == 9 || m == 11)
{
    if (d == 30)
    {
        d = 1;
        m = m + 1;
    } 
    else if (d == 31) 
    {
        printf("Invalid date");
        exit(0);
    } 
    else
    {
        d = d + 1;
    }
}
   printf("Following date is %d %d %d",d,m,y);  
}
  
