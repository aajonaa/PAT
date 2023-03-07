/*
 * Written by Jona 3-6-2023.
 */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);    //Get the two number.
    if (a + b < 0) {    //If the sum is negative.
        printf("-");    //Output signal first.
        if (-(a + b) < 1000)    //If the sum less than 4 digital.
            printf("%d", -(a + b));    //Output the number directly.
        else {    //If the number greater than 4 digital.
            printf("%d", -(a + b) / 1000);    //Output the high position digital first.
            printf(",");    //Output comma between the digital.
            printf("%d", -(a + b) % 1000);    //Output left low position digital.
        }//else      
    }//if
    else {
        if ((a + b) < 1000)    //If the sum less than 4 digital.
            printf("%d", a + b);    //Output the number directly.
        else {    //If the number greater than 4 digital.
            printf("%d", (a + b) / 1000);    //Output the high position digital first.
            printf(",");    //Output comma between the digital.
            printf("%d", (a + b) % 1000);    //Output left low position digital.
        }//else
    }
    printf("\n");
    return 0;
}
