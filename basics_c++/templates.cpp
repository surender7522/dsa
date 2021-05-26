#include<iostream>
using namespace std;

template <typename T>
T minn(T a, T b){
	return (a<b ? a:b);
}

int main(){
	cout<<minn(1,2)<<endl;
	cout<<minn('a','%')<<endl;
	cout<<minn("abc","aav")<<endl;

	cout<<max(4,67)<<endl;
}