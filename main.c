#include <stdio.h>
#include <stdlib.h>
#include "modules/calculations.h"

int main(int argc, char *argv[])
{
    int arr[] = {1,5,4,6,7,9,8,10,2};
    size_t n = sizeof(arr)/sizeof(arr[0]);
    float mean = 0;

    int success = calculate_mean(arr, n, &mean);
    if (success == 0){
        printf("Mean=%.2f\n", mean);
    }

    return EXIT_SUCCESS;
}