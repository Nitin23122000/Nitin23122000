#include<iostream>
#include<string.h>
using namespace std;
class addstring{
	private:
		char str1[25];
		
		public:
			void input(){
				cout<<"enter first string: ";
				gets(str1);
				
			}
			addstring operator+(addstring obj){
				addstring temp;
			strcpy(temp.str1,str1);
			strcat(temp.str1,obj.str1);
				return temp;
			}
			void output(){
				cout<<"output is: "<<str1;
			}
};
int main(){
	addstring a1,a2,res;
	a1.input();
	a2.input();
	res=a1+a2;
	res.output();
	return 0;
}
