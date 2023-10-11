#include<stdio.h>
/* main- checks for multiples of 3 and 5
 * returns 0 on success
 */

int main(void)
{
    int b, c;
    for (b = 1; b < 1024; b++)
    {
        if ((b % 3 == 0) || (b % 5 == 0))
        {
            c += b;
        }
        
    }
    printf("%d\n", c);
    return (0);
    
}
