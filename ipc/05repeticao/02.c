#include <stdio.h>

int main()
{
    int C, F, K;
    C = 0;

    while (F < 200) 
    {
        C++;
        F = (C*9)/5 + 32;
        if( F > 200) {break;}
        else {printf("\n%d", F);}
            
        K = C + 273.15;
        printf("\n%d", K);
    }
    
    return 0;
}
