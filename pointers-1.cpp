#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/pointers.pdf
//1
void razmenq(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() 
{
	int *a = 2, b = 5;
	cout << a << b;
	razmenq(&a, &b);
	cout << a << b;


 return 0;
}




