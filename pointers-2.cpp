#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/pointers.pdf
//2
void razmenq(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(int *a, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		razmenq(&a[i], &a[size - 1 - i]);
	}
}

void printArr(int *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main() 
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = i + 1;
	}
	printArr(a, 5);
	reverse(a, 5);
	printArr(a, 5);


 return 0;
}




