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
 * @file Statistis of an Array 
 * @brief Calculate Statistical parameters for the elements of array
 *
 * We calculate the mean, meadian, max, min of the elements of the array. This file also sorts the array from the min to the max element ascending order.
 *
 * @author Tarun Agrawal
 * @date 27.06.2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(int *me, int *med, int *max, int *min){
	int mean,median,maxi,mini;
	mean = *me;
	median = *med;
	maxi = *max;
	mini = *min;
	printf("mean:%d\n, median:%d\n, max:%d\n, min:%d\n"
,mean, median, maxi, mini);
}

void print_array(int data[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf(" %d ",data[i]);
	}
	printf("\n");
}

int find_mean (int data[], int n )
{
	int i;
	int sum=0;
	for (i=0;i<n;i++)
	{
		sum=sum+data[i];
	}
	int mean=sum/n;
	return mean;
}

int find_median (int data[], int n ){
	int median;
	if(n%2 == 0){
		median=(data[n/2]+data[(n+2)/2])/2;}
	else{
		median=data[(n/2)+1];}
	return median;
}

int find_max (int data[], int n )
{
	int i,max=data[0];
		for(int j=1;j<n;j++)
		{
			if (data[j]>=max)
				max=data[j];
		}
	
	return max;
}

int find_min (int data[], int n)
{
	int min=data[0];
		for(int j=1;j<n;j++)
		{
			if (data[j]<=min)
				min=data[j];
		}
	return min;
}

void sort_array(int data[], int n){
	int i;
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (data[j]<=data[i]){
				int temp= data[i];
				data[i]=data[j];
				data[j]=temp;}
		}
	}
}

void main() {
	unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	int mean;
	int median;
	int max;
	int min;
	sort_array(test,SIZE);
	print_array(test,SIZE);
	mean = find_mean(test,SIZE);
	median = find_median(test,SIZE);
	max = find_max(test, SIZE);  
  	min = find_min(test,SIZE);
  	print_statistics(&mean, &median, &max, &min);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
}


