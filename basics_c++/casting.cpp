#include<iostream>
using namespace std;

class test{
public:
	void xx(){
		cout<<1<<endl;
	}
};
class test1: public test{
public:
	void xx(){
		cout<<2<<endl;
	}
};


int main(int argc, char const *argv[])
{
	test* tem[2];
	tem[1] = new test1();
	tem[1]->xx();
	test1* aa = dynamic_cast<test1*>(tem[1]);
	aa->xx();
	return 0;
}
