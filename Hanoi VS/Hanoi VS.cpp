// Hanoi VS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

void h(int n, char a, char b, char c)
{
	if (n == 1) cout << a << "->" << b << endl;
	else
	{
		h(n - 1, a, c, b);
		cout << a << "->" << b << endl;
		h(n - 1, c, b, a);
	}
}
int main()
{

	static char a, b, c;
	static int n;
	cout << "n="; cin >> n;
	h(n, 'a', 'b', 'c');
	return 0;
}
