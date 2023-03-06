#include <gtest/gtest.h>
extern "C"
{
#include "../modules/calculations.h"
}

TEST(test_calculations, simple_arr) {
    int arr[] = {1, 5, 4, 6, 7, 9, 8, 10, 2, 3};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    float mean = 0;
    int success = calculate_mean(arr, n, &mean);
    EXPECT_EQ(success, 0);
    EXPECT_FLOAT_EQ(mean, 5.0);
}

TEST(test_calculations, empty_arr) {
    int arr[] = {};
    float mean = 0;
    int success = calculate_mean(arr, 0, &mean);
    EXPECT_EQ(success, -1);
}

TEST(test_calculations, all_negatives) {
    int arr[] = {-1, -5, -4, -6, -7, -9, -8, -10, -2, -3};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    float mean = 0;
    int success = calculate_mean(arr, n, &mean);
    EXPECT_EQ(success, 0);
    EXPECT_FLOAT_EQ(mean, -5.5);
}

TEST(test_calculations, mix_negative_positive) {
    int arr[] = {-1, -5, -4, 6, 7, 9, -8, -10, -2, -3};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    float mean = 0;
    int success = calculate_mean(arr, n, &mean);
    EXPECT_EQ(success, 0);
    EXPECT_FLOAT_EQ(mean, -1.1);
}

TEST(test_calculations, with_zeros) {
    int arr[] = {-1, -5, -4, 0, 7, 9, 0, -10, -2, -3};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    float mean = 0;
    int success = calculate_mean(arr, n, &mean);
    EXPECT_EQ(success, 0);
    EXPECT_FLOAT_EQ(mean, -0.89999998);
}