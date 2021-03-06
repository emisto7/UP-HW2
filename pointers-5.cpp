#include "pch.h"
#include <iostream>
using namespace std;

// week09/tasks/pointers.pdf
//5
bool isLetter(char symbol) {
	return symbol > 'a' && symbol < 'z';
}

void removeLowercaseLetters(char *str) {
	int cur = 0, i = 0;

	while (str[i] != '\0') {
		if (!isLetter(str[i]))
		{
			str[cur] = str[i];
			cur++;
		}
		i++;
	}

	str[cur] = '\0';
}



int main() 
{
	char myword[] = { 'H', 'e', 'l', 'l', 'o', 'T', 'h', 'e', 'r', 'e', '!', '\0' };
	cout << myword;
	removeLowercaseLetters(myword);
	cout << myword;


 return 0;
}




