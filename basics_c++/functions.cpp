#include<iostream>
using namespace std;

void func(int t){
	cout<<t<<endl;
}
int ff(int t);


int main(int argc, char const *argv[])
{
	func(1);
	ff(50);
	return 0;
}

int ff(int t){
	cout<<t<<endl;
	return 1;
}