#include<iostream>
using namespace std;
class account{

	int choice,balance;
	string name;
	
	
	public:
		void input(){
			cout<<"account holder's name: "<<endl;
			cin>>name;
			cout<<"select your account type:\n  1. saving\n2. current";
			cout<<"\nenter 1 for saving and 2 for current: ";
			cin>>choice;
			cout<<"enter your balance: "<<endl;
			cin>>balance;
		}
		
		void logic(){
			float si;
			int year;
			float r=4;
			char withdraw;
			if(choice==1){
				cout<<"your balance is: "<<balance<<endl;
				cout<<"enter the year : ";
				cin>>year;
				si=(balance*r*year)/100;
				balance+=si;
				cout<<"your revised balance is: "<<balance<<endl;
				cout<<"you can get cheque book of your account"<<endl;
				cout<<"Do you want to withdraw : ";
				cin>>withdraw;
				if(withdraw=='y'){
					cout<<"enter the amount to withdraw:  ";
					cin>>withdraw;
					balance-=withdraw;
					cout<<"your balance is: "<<balance<<endl;
				}
				else if(withdraw=='n'){
					cout<<"thank you"<<endl;
					cout<<"your balance is: "<<balance;
				}
				else{
					cout<<"enter valid input";
				}
		}

			else if(choice==2){
				cout<<"your balanc is: "<<balance<<endl;
				cout<<"you can get cheque book of your account"<<endl;
				if(balance<500){
					cout<<"your balance is below 500 \n you have to pay service charge";
		}
			
	}
	else{
				cout<<"enter valid input";
			}
}
};
int main(){
	account ac;
	ac.input();
	ac.logic();
	return 0;
}
