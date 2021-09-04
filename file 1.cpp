#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	ofstream out;
	out.open("productinfo.txt");
	out << "camera" << endl;
	out << "156" << endl;
	out << " 20 " << endl;
	out.close();
	cout << "data saved successfully" << endl;
}
