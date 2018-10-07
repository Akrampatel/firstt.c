/* This is use of multidimensional array example */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size[8][2] = {
        {6,26},
        {8,28},
        {10,30},
        {12,32},
        {14,34},
        {16,36},
        {18,38},
        {20,40},
    };
    int menSize, womenSize;
    for (menSize = 0; menSize < 8; menSize++) {
        for (womenSize = 0; womenSize < 2; womenSize++) {
            printf("%d ", size[menSize][womenSize]);
        }
        printf("\n");
    }
    return 0;
}




