#include<iostream>
using namespace std;
void main()
{
	const int size = 5;
	int x[size];
	int* ptr = x;
	int num;
	int max=0;
	cout << "enter five numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}
	for (int i = 0; i < 5; i++)
	{
		if (*(ptr + i) > max)
			max = *(ptr + i);
	}
	cout << "the biggest number is " << max << endl;
}
