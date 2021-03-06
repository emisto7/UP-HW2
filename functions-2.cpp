#include "pch.h"
#include <iostream>
using namespace std;

// week08/tasks/functions.pdf
//2
int abs(int x)
{
	if (x < 0)
	{
		return -x;
	}
	return x;
}

double f(double x)
{
	return x * x * x - 5 * x;
}

double integral(double a, double b, int n)
{
	double h = (b - a) / n;
	double sum = 0;
	double xi = h;
	for (int i = 1; i < n; i++)
	{
		sum += h / 2 * (f(xi) + f(xi + h));
		xi += h;
	}
	return abs(sum);
}

int main() 
{
	


 return 0;
}




