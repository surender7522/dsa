#include<iostream>
using namespace std;

class test{
public:
	int a;
	test(int x){a=x;}
	~test(){}
	void func();
	friend class fre;
	virtual void xx(){
		cout<<1<<endl;
	}
private:
	static const int b=55;
};
class test1: public test{
public:
	test1(int a): test(a){}
	virtual void xx(){
		cout<<2<<endl;
	}
};
class fre{
public:
	fre(){}
	~fre(){}
	void pr(test* tt){
		cout<<tt->b<<endl;
	}
};

void test::func(){
	cout<<this->a<<endl;
}
int ff(test& t);


int main(int argc, char const *argv[])
{
	
	test* tem[2];
	tem[0] = new test(8);
	tem[1] = new test1(8);
	tem[0]->xx();
	tem[1]->xx();
	return 0;
}

int ff(test& t){
	cout<<t.a<<endl;
	return 1;
}