#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/functionsPt2.pdf
//5
void inputArray(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}

void evenOddArray(int *arr, int x)
{
	inputArray(arr, x);
	int even = 0, odd = 0;
	for (int i = 0; i < x; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
}

void dvumerenMasiv(int **arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << endl;
}

void dvumerenMasiv2(int **arr, int n, int m)
{
	dvumerenMasiv(arr, n, m);
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++)
	{
		evenOddArray(arr[i], m);
	}
	cout << endl;
	for (int j = 0; j < m; j++)
	{
		evenOddArray(arr[][j], m);
	}
}


int main() 
{
	


 return 0;
}




