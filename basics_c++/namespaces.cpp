#include<iostream>
using namespace std;
//covers namespaces and their usage
namespace first {
	class val;
}


class first::val{
	public:
		static const int a=55;
		int ree(){return a;}
};


int main(){
	first::val x=first::val();
	cout<<x.ree()<<endl;
	cout<<"Hello"<<endl;
	return 0;
}