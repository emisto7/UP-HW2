#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/functionsPt2.pdf
//3
void inputArray(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}

int factorial(int x)
{
	int m = 1;
	for (int i = x; i > 0; i--)
	{
		m *= i;
	}
	return m;
}

void factorialArray(int *arr, int x)
{
	inputArray(arr, x);
	for (int i = 0; i < x; i++)
	{
		cout << arr[i] << "! = ";
		cout << factorial(arr[i]) << endl;
	}
	cout << endl;
}

int main() 
{
	


 return 0;
}




