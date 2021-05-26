#include<iostream>
using namespace std;

class test{
public:
	virtual void xx()=0;
};
class test1: public test{
public:
	virtual void xx(){
		cout<<2<<endl;
	}
};


int main(int argc, char const *argv[])
{
	
	test* tem[2];
	tem[1] = new test1();
	tem[1]->xx();
	return 0;
}
