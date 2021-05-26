#include<iostream>
using namespace std;

class test{
public:
	int a;
	test(int x){a=x;}
	~test(){}
};

void func(test* t){
	cout<<t->a<<endl;
}
int ff(test& t);


int main(int argc, char const *argv[])
{
	test* temp = new test(5);
	test temp1 = test(7);
	test* tem[2];
	tem[1] = new test(8);
	func(temp);
	ff(temp1);
	ff(*tem[1]);
	return 0;
}

int ff(test& t){
	cout<<t.a<<endl;
	return 1;
}