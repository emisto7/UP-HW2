#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/functionsPt2.pdf
//2
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

	cout << "Even ->" << even << endl
		<< "Odd ->" << odd << endl;
}

int main() 
{
	


 return 0;
}




