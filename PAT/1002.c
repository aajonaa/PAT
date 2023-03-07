/*
 * Written by Jona 3-7-2023.
 */

#include <stdio.h>
int main() {
    int i, j, k, idx;
    float v, a0[10] = {0}, a1[10] = {0};
    for (i = 0; i < 2; i++) {    //Get two line.
        scanf("%d", &k);    //Get terms of each line.
        for (j = 0; j < k; j++) {    //Get the term value.
            scanf("%d%f", &idx, &v);
            if (i == 0)
                a0[idx] = v;
            else
                a1[idx] = v;
        }//for
    }//for
    for (i = 0; i < 10; i++) {    //Merge similar terms.
        a0[i] += a1[i];
        if (a0[i] == 0) {
            k = i;
            break;    //Quit if the left term are empty.
        }//if
    }//for
    printf("%d ", k);
    for (i = k - 1; i >= 0; i--)    //Output every term.
        if (i == 0)
            printf("%d %.1f", i, a0[i]);
        else
            printf("%d %.1f ", i, a0[i]);
    printf("\n");
    return 0;
} 
