#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/functionsPt2.pdf
//4
void inputArray(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}

long binary(int x) {
	long bin = 0;
	int i = 0;

	while (x != 0) {
		bin += x % 2 * pow(10, i);
		i++;
		x /= 2;
	}
	return bin;
}

void binaryArray(int *arr, int x) {
	inputArray(arr, x);

	for (int i = 0; i < x; i++) {
		cout << arr[i] << " = " <<
			binary(arr[i]) << endl;
	}
}


int main() 
{
	


 return 0;
}




