#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/functionsPt2.pdf
//1 
void inputArray(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}

void reverse(int *arr, int x)
{
	for (int i = x - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void reverseArray(int *arr, int x)
{
	inputArray(arr, x);
	reverse(arr, x);
}

int main() 
{
	


 return 0;
}




