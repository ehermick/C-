/**
 * Description: CSE 240 - Spring 2019 - Assignment 3 - Part 1
 *
 * Completion Time: ~ 20 min
 *
 * Emma Hermick
 *
 * Version 1.0
 */


#include <iostream>

using namespace std;

//Initialize the array with provided parameters using for loop and if statement
void initializeArray(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		//5s in even position
		if (i % 2 == 0)
		{
			*(array + i) = 5;
		}
		//0s in odd position
		else
		{
			*(array + i) = 0;
		}
	}
}

//For statement to print all elements of the array
void printArray(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << *(array + i);

		if (i < length - 1)
		{
			cout << ", ";
		}
	}
	cout << "\n";
}

//Orders elements in descending order using Insertion Sort
void insertionSort(int* array, int length)
{
	for (int i = 1; i < length; i++)
	{
		int next = *(array + i);
		int j = i;
		while (j > 0 && *(array + (j - 1)) < next)
		{
			*(array + j) = *(array + (j - 1));
			j--;
		}
		*(array + j) = next;
	}

}

//Implements recursive function that calculates and returns factorial
int factorial(int num)
{
	if (num == 1)
	{
		return 1;
	}

	if (num <= 0)
	{
		return 0;
	}

	else
	{
		return num * factorial(num - 1);
	}
}

int main()
{
	int a[] = { 2, 5, 7, 9, 12, 13, 15, 17, 19, 20 };
	int b[] = { 18, 16, 19, -5, 3, 14, 6, 0 };
	int c[] = { 4, 2, 5, 3, 1 };

	/* testing initialize_array */
	printArray(a, sizeof(a) / sizeof(a[0])); /* print: 2, 5, 7, 9, 12, 13, 15, 17, 19, 20 */
	initializeArray(a, sizeof(a) / sizeof(a[0]));
	printArray(a, sizeof(a) / sizeof(a[0])); /* print: 5, 0, 5, 0, 5, 0, 5, 0, 5, 0 */

	/* testing insertionSort */
	printArray(b, sizeof(b) / sizeof(b[0])); /* print: 18, 16, 19, -5, 3, 14, 6, 0 */
	insertionSort(b, sizeof(b) / sizeof(b[0]));
	printArray(b, sizeof(b) / sizeof(b[0])); /* print: 19, 18, 16, 14, 6, 3, 0, -5 */

	/* testing factorial */
	cout << factorial(5) << endl; /* print: 120 */

	c[0] = factorial(c[0]);
	c[1] = factorial(c[2]);
	printArray(c, sizeof(c) / sizeof(c[0])); /* print: 24, 120, 5, 3, 1 */

	return 0;
}