#include "binary.h"
// gcc parity.c -o parity && ./parity
int main()
{
    int n = 0b11011011;
    bin2(n);
    if (parity(n))
        printf("odd\n");
    else
        printf("even\n");
    bin(n);
        if (parity(n))
        printf("0\n");
    else
        printf("1\n");
    

return 0;
}