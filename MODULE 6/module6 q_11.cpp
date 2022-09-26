#include<iostream>
using namespace std;
class number{
	private:
		int a,b;
	
		public:
			void input(){
			
			cout<<"enter the value of a and b: ";
			cin>>a>>b;
			cout<<"\n before swapping:\n a and b:"<<a<<" "<<b;
		}
		void display(){
			cout<<"\n after swapping ";
			cout<<"a: "<<a<<" "<<"\nb: "<<b;
		}
		friend void swapping(number &n);
};
void swapping(number &n){
	int temp;
	temp=n.a;
	n.a=n.b;
	n.b=temp;
}
int main(){
	number n;
	n.input();
	swapping(n);
	n.display();
	return 0;
}
