#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/pointers.pdf
//6
int average(int *a, int size) 
{
	if (size == 1) return 0;
	if (a[size - 1] == a[size - 2]) return size - 1;

	int index = -1;
	if (a[0] == a[1]) index = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (a[i] == (a[i - 1] + a[i + 1]) / 2)
			index = i;
	}

	return index;
}


int main() 
{
	int a[] = { 5, 5, 15, -5, 20, 4, 9, 0 };
	cout << average(a, 8);


 return 0;
}




