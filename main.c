#include<stdio.h>
#include <math.h>


void sierp_row(unsigned k, unsigned row)
{
    // base case
    int num = pow(3,k);
    if (1 == k)
    {    
        for (int i = 0; i <= num-1 ; i ++)
        {
            if (1 == row % 3)
            {
                if(1 == i % 3)
                {
                    printf (" ");
                }
                else
                {
                    printf("#");
                }  
            }
            else
            {
                printf("#");
            }
        }
    }
    //step toward
    else
    {
        for (int i = 0; i <= num-1 ; i ++)
        {
             if (row > (num/3)-1 && row <= (num/3*2)-1)
             {
                if(i > (num/3)-1 && i <= (num/3*2)-1)
                {
                    printf (" ");
                }
                else
                {
                    if (0 == i % (num/3))
                    {
                        sierp_row( k - 1, row % (num/3));
                    }
                }
             }
             else
             {
                if (0 == i % (num/3))
                {
                    sierp_row( k - 1, row % (num/3));
                }
             }
             
        }
    }
}


