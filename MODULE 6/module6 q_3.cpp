#include<iostream>
using namespace std;
class simple{
	private:
		float si;
	public:
		 simple(int p,float r,int t){
			si=((p*r*t)/100);
		}
		void display(){
			cout<<" simple interest: "<<si<<endl;
		}
};
int main(){
	simple s(1000,2.5,2);
	s.display();
	
	return 0;
}
