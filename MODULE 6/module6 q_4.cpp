#include<iostream>
using namespace std;
class line{
	public:
		inline float mul(float x,float y ){
			return x*y;
		}
		inline float cube(float x){
			return (x*x*x);
		}
};
int main(){
	line l;
	float x,y;
	cout<<"enter two numbers: ";
	cin>>x>>y;
	cout<<"multiplication value is: "<<l.mul(x,y)<<endl;
	cout<<"cube value is: "<<l.cube(x)<<endl<<l.cube(y);
	return 0;
}
