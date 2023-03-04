#include "calculations.h"

int calculate_sum(int arr[], size_t length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int calculate_mean(int arr[], size_t length, float* result)
{
    if(length == 0)
    {
        return -1; // error can't divide by 0
    }

    int sum = calculate_sum(arr, length);
    *result = (float)sum / length;
    return 0;
}