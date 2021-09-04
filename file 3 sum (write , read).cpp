#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	//read from file productinfo
	int x, y;
	ifstream in("productinfo.txt");
	in  >> x;
	in >> y;
	int sum = x + y;
	in.close();
	//write in file
	ofstream out("productinfo.txt", ios::app);
		out << sum;
		out.close();
}
