#include<iostream>
using namespace std;
template<class T>
int swap_numbers(T&x,T&y){
	T temp;
	temp=x;
	x=y;
	y=temp;
	return 0;
}
int main(){
	int a,b;
	a=10,b=20;
	swap_numbers(a,b);
	cout<<"a: "<<a<<"b: "<<b<<endl;
	return 0;
}

