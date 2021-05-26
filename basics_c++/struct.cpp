#include <iostream>
using namespace std;

struct AA{
	int val;
	AA* left;
	AA* right;
};

int main(){
	AA* x[2];
	x[1] = new AA();
	x[0] = new AA();
	x[0]->val = 5;
	x[0]->left = x[1];
	x[1]->val = 6;
	cout<<x[0]->val<<(x[0]->left)->val<<endl;
}