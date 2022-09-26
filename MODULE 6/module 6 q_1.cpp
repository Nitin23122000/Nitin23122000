#include<iostream>
using namespace std;
class bank{
	private:
		char name[20];
		char account_name[20];
		int account_no;
		int balance;
		
		public:
		void initialize(){
			cout<<"enter account holders name: ";
			gets(name);
			cout<<"enter account type: ";
			gets(account_name);
			cout<<"enter your account no: ";
			cin>>account_no;
			cout<<"enter balance to deposit: ";
			cin>>balance;
		}
		void deposit(){
			int bal;
			cout<<"enter the amount to deposit: ";
			cin>>bal;
			balance+=bal;
			cout<<"\n amount deposited successfully \n your new balance: "<<balance<<endl;
		}
		void check(){
			int bal;
			cout<<"your balance is: "<<balance<<endl;
			cout<<"enter your amount to withdraw: ";
			cin>>bal;
			if(bal<=balance){
				balance-=bal;
				cout<<"remaining balance is : "<<balance;
			}
			else{
				cout<<"balance is not sufficient: ";
			}
		}	
		void display(){
			cout<<" name: "<<name<<endl;
			puts(name);
			cout<<"balance: "<<balance;
		}
};
int main(){
	bank b;
	b.initialize();
	b.deposit();
	b.check();
	b.display();
	return 0;
}