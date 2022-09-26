#include<iostream>
using namespace std;
class info{
	public:
		string name;
		int age;
		void input(){
			cout<<"enter the student's name: ";
			cin>>name;
			cout<<"enter the age: ";
			cin>>age;
		}
};
class result:public info{
	public:
		int phy_marks;
		int maths_marks;
		int chem_marks;
		int eng_marks;
		int hindi_marks;
		int sum;
		float percentage;
		int salary;
				void input2(){
				cout<<"enter the marks of physics: ";
				cin>>phy_marks;
				cout<<"enter the marks of chemistry: ";
				cin>>maths_marks;
				cout<<"enter the marks of maths: ";
				cin>>chem_marks;
				cout<<"enter the marks of english: ";
				cin>>eng_marks;
				cout<<"enter the marks of hindi: ";
				cin>>hindi_marks;
				sum=phy_marks+maths_marks+chem_marks+eng_marks+hindi_marks;
				cout<<"total number:  "<<sum<<endl;
				percentage =((float)sum/500*100);
				cout<<"percentage is: "<<percentage<<"%"<<endl;
				cout<<"enter teacher's salary : ";
				cin>>salary;
		}
		void display(){
			
			cout<<"student's name: "<<name<<endl;
			cout<<"student's age: "<<age<<endl;
			cout<<"percentage: "<<percentage<<"%"<<endl;
			cout<<"teacher's salary: "<<salary;
			
			
		}
};
int main(){
	result rs;
	rs.input();
	rs.input2();
	rs.display();
	return 0;
}

