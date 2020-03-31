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
 * @file stats.c
 * @brief my frist assigment
 *

 *
 * @author  Eslam Shahin
 * @date 31/3/2020
 *
 */


//include header files
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
//main function entery point
void main()
{

    unsigned char test[SIZE] = { 39, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90
                               };

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_array(test,SIZE);
    print_statistics(test,SIZE);
    
}

/* Add other Implementation File Code Here */
void find_mean(unsigned char *arr,unsigned int SIZ)
{
    unsigned int counter=0;
    int sum=0;
    for (counter; counter<SIZ; counter++)
    {
        sum = sum + arr[counter];
    }
    printf("\nThe mean is : ");
    printf("%d\n",(sum/SIZ)-1);

}
//function to compare the elements of array to sort them
void sort_array(unsigned char *arr,unsigned int SIZ)
{
    unsigned int i, counter =0;
    int temp=0;
    for (counter; counter<SIZ; counter++)
    {
        for (i=0; i<SIZ; i++)
        {
            if(arr[counter]>arr[i])
            {
                temp=arr[counter];
                arr[counter]=arr[i];
                arr[i]=temp;
            }
        }

    }
    printf("\n\nSorted Array is : ");
    for (i=0; i<SIZ; i++)
    {
        printf("%d ",arr[i]);
    }
}
//function to compare the elements of array to find the maxmum element
void find_maxmum(unsigned char *arr,unsigned int SIZ)
{
    unsigned int i;
    int max =arr[0];

    for (i=0; i<SIZ; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\n\nThe Maxmum number of array is : %d\n",max);

}
//function to compare the elements of array to find the minimum element
void find_minimum(unsigned char *arr,unsigned int SIZ)
{
    unsigned int i;
    int min =arr[0];

    for (i=0; i<SIZ; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("\nThe Minimum number of array is : %d \n",min);

}
//function to print array elements
void print_array(unsigned char *arr,unsigned int SIZ)
{
    unsigned int i=0;
    
    printf("\nYour original array is : ");
    for (i; i<SIZ; i++)
    {
        printf("%d ",arr[i]);

    }

}
//a function to find the median member of un sorted array
void find_median(unsigned char *arr,unsigned int SIZ)
{
    int mid;
//if size is odd
    if (SIZ%2!=0)
    {
        mid =arr[(SIZ/2)];
    }
//if size is even
    if (SIZ%2==0)
    {

        mid =(arr[(SIZ/2)-1]+arr[(SIZ/2)])/2.0;

    }
    printf("\nThe median is : ");
    printf("%d\n",mid);
}
//function included in it another functions to find array statistics 
void print_statistics(unsigned char *arr,unsigned int SIZ)
{sort_array(arr ,SIZ);
    find_maxmum( arr,SIZ);
    find_minimum( arr,SIZ);
    find_mean(arr,SIZ);
    find_median( arr,SIZ);
}
