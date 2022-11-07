#ifndef _BINARY_H_
#define _BINARY_H_

#include <stdio.h>
#include<stdbool.h>

void bin(unsigned n);
void bin2(unsigned n);
void bin3(unsigned n);
bool parity (unsigned n);
unsigned twoscmp (unsigned n);

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

void bin2(unsigned n)
{
    int c = 0;
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
    {
        if(c%8 == 0 && c!= 0)
            printf(" ");
        (n & i) ? printf("1") : printf("0");
        c++;
    }
    printf("\n");
}

void bin3(unsigned n)
{
    int i;
    for(i = 8; i > -1; i--)
    {
        if(n & (1<<i))
            printf("1");
        else
            printf("0");
    }
}

bool parity (unsigned n)
{

    unsigned i;
    /* switch to true for even parity */
    bool parity = false;
    for(i = 0; i < 32; i++)
    {
        if(n & (1<<i))
            parity=!parity;
    }
    return parity;
}

unsigned twoscmp (unsigned n)
{
    return ((~n)+1);
}

#endif