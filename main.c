#include <stdio.h>
#include <stdlib.h>
#include "modules/calculations.h"
#include "modules/string_operations.h"

int main(int argc, char *argv[])
{
    // calc mean of array numbers
    int arr[] = {1,5,4,6,7,9,8,10,2};
    size_t n = sizeof(arr)/sizeof(arr[0]);
    float mean = 0;

    int success = calculate_mean(arr, n, &mean);
    if (success == 0){
        printf("Mean=%.2f\n", mean);
    }

    //reverse string
    char str[] = "Hello, world!";
    reverse_string(str);
    printf("%s\n", str);

    return EXIT_SUCCESS;
}