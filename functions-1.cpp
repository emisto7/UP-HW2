#include "pch.h"
#include <iostream>
using namespace std;

// week08/tasks/functions.pdf
//1
int abs(int x)
{
	if (x < 0)
	{
		return -x;
	}
	return x;
}


int pow(int x, int y)
{
	int m = 1, k = 0;
	while (k < y)
	{
		m *= x;
		k++;
	}
	return m;
}


int min(int x, int y)
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}


int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}


int minOf3(int x, int y, int p)
{
	return min(min(x, y), p);
}


int maxOf3(int x, int y, int p)
{
	return max(max(x, y), p);
}


int isAlpha(char x)
{
	return x <= 'z' && x >= 'a' || x <= 'Z' && x >= 'A';

}


int isDigit(char x)
{
	return x <= '9' && x >= '0';
}


int main() 
{
	


 return 0;
}




