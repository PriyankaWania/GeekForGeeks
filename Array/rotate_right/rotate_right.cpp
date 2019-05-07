/*
 * rotate_right.cpp
 *
 *  Created on: May 7, 2019
 *      Author: Priyanka Wania
 */

#include<iostream>
#include<stdio.h>

using namespace std;

/* This is a program to right shift the elements of an array by one.
 * Step 1: Swap the last element with the first element till n-1
 * Step 2: Save the first element as temp
 */

void rightrotate(int arr[], int n)
{
	int temp = arr[n-1]; //Saved the last element of the array in temp
	for(int i=n-1; i>0; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp; //Swapped the last element with the first
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	rightrotate(arr, n);

	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
}
