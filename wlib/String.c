#include "String.h"
#include <stdio.h>
#include <stdlib.h>

int str_int(String str) {
    int i = 0;
    int digits = 0;
    int integer = 0;
    int power_init = 10;
    int power = 10;
    while((str[i] >= '0' && str[i] <= '9')) {
        digits++;
        i++;
    }
    i = 0;
    while(i < digits) {
        int digit = str[(digits - 1) - i] - '0';

        switch(i) {
            case 0:
                integer = digit;
                break;
            default:

                integer += ((power) * digit);
                for(int j = 0; j < i; j++) power *= power_init;
                break;
        }

        i++;
    }

    return integer;
}

