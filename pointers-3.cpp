#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/pointers.pdf
//3
void printArr(int *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void sortThirdArray(int *a, int sizeA, int *b, int sizeB, int* sorted)
{
	bool ascending;
	if (sizeA > 1)
		ascending = a[0] < a[1];
	else if (sizeB > 1)
		ascending = b[0] < b[1];
	else
		ascending = true;

	int curA = 0, curB = 0, curSorted = 0;
	while (curA < sizeA && curB < sizeB)
	{
		if (a[curA] < b[curB] && ascending || a[curA] > b[curB] && !ascending)
		{
			sorted[curSorted] = a[curA];
			curA++;
		}
		else
		{
			sorted[curSorted] = b[curB];
			curB++;
		}
		curSorted++;
	}

	if (curA >= sizeA)
	{
		while (curB < sizeB)
		{
			sorted[curSorted] = b[curB];
			curSorted++;
			curB++;
		}
	}
	else
	{
		while (curA < sizeA)
		{
			sorted[curSorted] = a[curA];
			curSorted++;
			curA++;
		}
	}
}


int main() 
{
	int a[5], b[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = i + 1;
		b[i] = i + 2;
	}

	b[0] = -4;
	b[1] = 0;

	int c[10];
	printArr(a, 5);
	printArr(b, 5);
	sortThirdArray(a, 5, b, 5, c);
	printArr(c, 10);


 return 0;
}




