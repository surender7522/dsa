#include<iostream>
using namespace std;
// Covers data types, conversions, max, mins, bitshift etc
int main(int argc, char const *argv[])
{
	char a;
	bool b;
	short c;
	int d;
	long long e;
	float f;
	double g;
	string aa="asdf";
	char* bb = "asfd";
	string cc = "12343242";
	cout<<sizeof(f)<<endl;
	cout<<aa<<endl;
	cout<<aa[1]<<endl;
	cout<<stoi(cc)<<endl;
	cout<<sizeof(aa)<<endl;
	cout<<aa.size()<<endl;
	cout<<bb<<endl;
	cout<<sizeof(bb)<<endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
	cout<<(1<<3)<<endl;
	return 0;
}