#include "pch.h"
#include <iostream>
using namespace std;

// week08/tasks/functions.pdf
//4
bool prosto(int x)
{
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool sdvoeniProsti(int a, int b)
{
	if (prosto(a) && prosto(b) && a + 2 == b)
	{
		return true;
	}
	return false;
}


int main() 
{
	


 return 0;
}




