#include <stdio.h>


/*
A byte (8 bits) is transmitted using RS232
with the following settings: 8 data bits,
1 stop bit, no parity and 9,600 bits per
second. How long will it take to transfer 
the entire frame (Include start bit, data bits,
and stop bit) ? Give your answer in milliseconds,
with 3 digits past the decimal.
*/

int main()
{
    double bps = 10.00/9600.00; //bits per second
    printf("%f\n", (bps * 1000)); //bits per millisecond
}
