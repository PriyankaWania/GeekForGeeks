// C++ program for reversal algorithm
// of array rotation
#include <bits/stdc++.h>
using namespace std;

/* This is a program in c++ used to rotate the array with 'd' rotating factor
 * using Reverse Algorithm.
 * Consider you have the following constraints:
 * int arr[]={1,2,3,4,5}, d= 2, and n=5
 * 		Step 1: Break the array into two parts A and B such that
 * 					A = arr[0 to d-1]
 * 					B = arr[d to n-1]
 * 					Total = arr[0 to n-1]
 * 		Step 2: Reverse A
 * 		Step 3: Reverse B
 * 		Step 4: Reverse Total
 */

void rotate(int arr[], int start, int end)
{
	while(start < end)
	{
		int temp = arr[start]; // Saving the first element of the array in temp
							   // For example Array B = {3,4,5} Hence, temp = 3
		arr[start] = arr[end]; // Swapping the first element with the last
							   // For example: arr[2]=arr[4] Hence, 3 = 5
		arr[end] = temp;		// 5 = temp;
								// Array = { 5,4,3 }
		start ++;
		end --;
	}
}

void reverse(int arr[], int n, int d)
{
	rotate(arr, 0, d-1);
	rotate(arr, d, n-1);
	rotate(arr, 0, n-1);
}

void printarray(int arr[], int n)
{
	for(int i=0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int d = 12;
	int n;
	n = sizeof(arr)/sizeof(arr[0]);

	d = d%n; //In case the rotating factor is more than the size of array

	cout << "d: " << d <<endl;

	reverse(arr, n, d);
	printarray(arr, n);

	return 0;
}
