#include "pch.h"
#include <iostream>
using namespace std;

// week08/tasks/functions.pdf
//3
void printmatrix(int **arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void matrix(int **arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				arr[i][j] = i;
			}
			else if (i < j)
			{
				arr[i][j] = j - i;
			}
			else if (i > j)
			{
				arr[i][j] = i * j;
			}
		}
	}
	printmatrix(arr, n, m);
}

int main() 
{
	


 return 0;
}




