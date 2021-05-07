#include <stdio.h>
#include <math.h>

void sierp_row(unsigned k, unsigned row);

int main()
{
    unsigned k;
    printf("Please enter the number of levels: ");
    scanf("%u", &k);

    for (int i = 0; i < pow(3, k); ++i) {
        sierp_row(k, i);
        printf("\n");
    }
    
    return 0;
}