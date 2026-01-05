/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Stats.h 
 * @brief Prototype functions for module 1 Embedded Course
 *
 * 
 * @author <A Carrada>
 * @date <01 05 2026 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the elements of a one-dimensional integer array to the console.
 *
 * This function iterates through a 1D array using a pointer and displays 
 * each element's value to the standard output using printf.
 *
 * @param array Pointer to the memory address of the first element of the array.
 * @param size  The number of elements contained in the array.
 *
 * @return void This function does not return a value.
 */
void print_array_unidimentional(int *array, int size);

/**
 * @brief Returns the median value of a data array.
 * * @param array Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * @return float The calculated median value.
 */
float find_median(unsigned char *array, unsigned int length);

/**
 * @brief Returns the mean (average) value of a data array.
 * * @param array Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * @return float The calculated mean value.
 */
float find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Returns the maximum value found in a data array.
 * * @param array Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * @return unsigned char The maximum value.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Returns the minimum value found in a data array.
 * * @param array Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * @return unsigned char The minimum value.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest.
 * * The zeroth element will be the largest value, and the last 
 * element (n-1) will be the smallest value.
 * * @param array Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * @return void
 */
void sort_array(unsigned char *array, unsigned int length);

/**
 * @brief Prints the statistics of a data array to the screen.
 * * This function calculates and displays the key statistics of the 
 * provided array, including the minimum, maximum, mean, and median 
 * values by calling the respective analysis functions.
 * * @param array  Pointer to the first element of the data array.
 * @param length The number of elements in the array.
 * * @return void
 */
void print_statistics(unsigned char *array, unsigned int length);







#endif /* __STATS_H__ */
