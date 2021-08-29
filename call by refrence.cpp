#include<iostream>
using namespace std;

void shift(int &x, int &y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void main()
{
	int a = 5, b = 10;
	shift(a, b);
	cout << a << endl;
	cout << b << endl;
}
