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
 * @file stats.h
 * @brief a header file contains declaration and documentation of a function
 *
 * <Add Extended Description Here>
 *
 * @author Eslam Shahin
 * @date 31/3/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char *arr,unsigned int SIZ);
void find_median(unsigned char *arr,unsigned int SIZ);
void print_array(unsigned char *arr,unsigned int SIZ);
void find_minimum(unsigned char *arr,unsigned int SIZ);
void find_maxmum(unsigned char *arr,unsigned int SIZ);
void sort_array(unsigned char *arr,unsigned int SIZ);
void find_mean(unsigned char *arr,unsigned int SIZ);

/**
 * @brief <this function do some operation on array of afixed size such as max, min and mean value>
 *
 *
 * @param <unsigned char *arr> <take an array from user>
 * @param <unsigned int SIZ> <take the size of an array from user>
 *
 * @return void not return any value
 */


#endif /* __STATS_H__ */
