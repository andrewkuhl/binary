#include "binary.h"
// gcc checksum.c -o checksum && ./checksum

int getSize (char * s) {
    char * t;    
    for (t = s; *t != '\0'; t++)
        ;
    return t - s;
}

int main()
{
    char* c = "Ababab";
    unsigned sum = 0;
    for(int i = 0; i < getSize(c); i++)
    {
        bin3(c[i]);
        printf(" ");
    }
    printf("\n");
    for(int i = 0; i < getSize(c); i++)
    {
        sum+=c[i];
    }
    unsigned checksum = twoscmp(sum) & 0xFF;
    bin2(checksum);
    printf("%X\n", checksum);
    bin2(sum + checksum);


    return 0;
}