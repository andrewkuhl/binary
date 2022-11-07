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
    char* c = "Hello";
    for(int i = 0; i < getSize(c); i++)
    {
        bin3(c[i]);
        printf(" ");
    }
    printf("\n");
    return 0;
}