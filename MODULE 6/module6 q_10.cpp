#include<iostream>
using namespace std;
class account{
      	public:
		string name;
		int account_no;
		string type;
	
			void info(){
				cout<<"enter the account holder's name: ";
				cin>>name;
				cout<<"enter your account number: ";
				cin>>account_no;
				cout<<"enter your type of account: ";
				cin>>type;
			}
};
class detail:public account{
		public:
	int balance;
	int year;
	int interest=5;
	int withdraw;
	
	
	

		void input(){
			cout<<"enter your balance: ";
			cin>>balance;
			cout<<"\n\nyour balance is: "<<balance<<endl;
			cout<<"how many year you are intrested in: ";
			cin>>year;
			balance+=(balance*year*interest)/100;
			cout<<"your revised balance is: "<<balance<<endl;
			cout<<"enter the withdrawal amount: ";
			cin>>withdraw;
			balance=balance-withdraw;
			cout<<"your balance after withdraw:  "<<balance<<endl;
			if(balance<1000){
				cout<<"your balance is below 1000\n you have to pay 500 as panalty0 ";
			}
			else{
				cout<<"your balance is : "<<balance<<endl;
			}
		}
		
	
};
class display:public detail{
	public:
			void display2(){
				cout<<"\n\n......Account holder's information......"<<endl;
				cout<<"\nyour name: "<<name<<endl;
				cout<<"account number: "<<account_no<<endl;
				cout<<"Account type: "<<type<<endl;
				cout<<"your balance: "<<balance<<endl;
			}
};
int main(){
	display d;
	d.info();
	d.input();
	d.display2();
	return 0;
}
