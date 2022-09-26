#include<iostream>
using namespace std;
int div(int a,int b){
	if(b==0){
		throw"0 cannot be divided";
	}
	return a/b;
}
int main(){
	float a,b;
	cout<<"enter 2 number: ";
	cin>>a>>b;
	try{
		cout<<"ans"<<div(a,b);
	}
	catch(const char*e){
		cout<<"error"<<e;
	}return 0;
}
