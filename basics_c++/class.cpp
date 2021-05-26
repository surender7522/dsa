#include<iostream>
using namespace std;

class test{
public:
	int a;
	test(int x){a=x;}
	~test(){}
	void func();
};
class test1: public test{
public:
	test1(int a): test(a){}
	void xx(){
		cout<<this->a<<endl;
	}
};

void test::func(){
	cout<<this->a<<endl;
}
int ff(test& t);


int main(int argc, char const *argv[])
{
	test1* temp = new test1(8989);
	temp->a=43523;
	test temp1 = test(7);
	test* tem[2];
	tem[1] = new test(8);
	temp->xx();
	ff(temp1);
	ff(*tem[1]);
	return 0;
}

int ff(test& t){
	cout<<t.a<<endl;
	return 1;
}