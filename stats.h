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
 * @file Functions Header 
 * @brief This file contains all the function declaration for functions to be used for implementation of the program.
 *
 * These function declarations are made to perform various tasks like calcualting various statistics like mean, median, maximum, minimun along with ascending arrangement of elements of the array.
 *
 * @author Tarun Agrawal
 * @date 28.06.2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
 
void print_statistics(int *me, int *med, int *max, int*min);
//@brief prints the calculated parameters
//this function takes in the values of the calculated parameters as pointers and prints them for the output.
//@return no value

void print_array (int);
/*@brief prints the sorted array
 * @return no value*/

int find_median (int);
//finds the medin of the elements of the array passed as input
//@return median value

int find_mean (int);
//finds the mean of the elements of the input array
//@return mean value

int find_max (int);
//finds the maximum value elemengt in the input array
//@return Max value

int find_min (int);
//finds the minimum value element in the input array
//@return Min Value

void sort_array (int);
//@brief sorts the input array on ascending order
//This function takes the array as an input pointer, manipulates the position of the elements
//@return no value

#endif /* __STATS_H__ */
