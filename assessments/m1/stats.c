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
 * @file Stats.c 
 * @brief Code for calculates stadistical values for a unidimentional array and print
 * each value.
 *
 * 
 * @author <A Carrada>
 * @date <01 05 2026 >



/* Size of the Data Set */

#define SIZE (40)
#include <stdio.h>
#include "stats.h"

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Original Array:\n");
  print_array_unidimentional(test, SIZE);

  print_statistics(test, SIZE);

  printf("\nSorted Array (Largest to Smallest):\n");
  sort_array(test, SIZE);
  print_array_unidimentional(test, SIZE);

}



void print_statistics(unsigned char *array, unsigned int length) {
    printf("Reporte de Estadísticas:\n");
    printf("Mínimo: %u\n", find_minimum(array, length));
    printf("Máximo: %u\n", find_maximum(array, length));
    printf("Media:  %.2f\n", find_mean(array, length));
    printf("Mediana: %.2f\n", find_median(array, length));
}

void print_array_unidimentional(unsigned char *array, unsigned int length) {
    unsigned int i; // Declaración fuera del for
    for (i = 0; i < length; i++) {
        printf("%3u ", array[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }
    printf("\n");
}


float find_median(unsigned char *array, unsigned int length) {
    /* El código que calcula la mediana va aquí */
    sort_array(array, length);
    if (length % 2 == 0) {
        return (float)(array[(length/2) - 1] + array[length/2]) / 2;
    } else {
        return (float)array[length/2];
    }
}

float find_mean(unsigned char *array, unsigned int length) {
    unsigned int sum = 0;
    unsigned int i; // Declaración fuera del for
    for (i = 0; i < length; i++) {
        sum += array[i];
    }
    return (float)sum / length;
}

unsigned char find_maximum(unsigned char *array, unsigned int length) {
    unsigned char max = array[0];
    unsigned int i; // Declaración fuera del for
    for (i = 1; i < length; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int length) {
    unsigned char min = array[0];
    unsigned int i; // Declaración fuera del for
    for (i = 1; i < length; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

void sort_array(unsigned char *array, unsigned int length) {
    unsigned int i, j; // Declaraciones al inicio
    unsigned char temp;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}




/* Add other Implementation File Code Here */
