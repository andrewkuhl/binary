#include <stdio.h>

int main()
{
    /*
Given a KL46Z UART configured to use a 8MHz source clock,
 what is the value that should be entered in the Baud Rate 
 Divisor Registers for a Baud Rate of 115600 bps?
    */

    double baudDiv,fuartsrc, baudRate = 0;
    fuartsrc = 8000000; // 8 MHz
    baudRate = 115600;

    baudDiv = fuartsrc / (16 * baudRate);
    printf("%f\n", baudDiv);
    return 0;
}