#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	ofstream out;
	out.open("personinfo.txt",ios::app);
	out << "my name is mazen" << endl;
	out << "i'm 21 years old" << endl;
	out << "i love my friends" << endl;
	out.close();
	cout << "data saved successfully" << endl;
}
