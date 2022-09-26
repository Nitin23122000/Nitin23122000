#include<iostream>
using namespace std;
class matrix{
	private:
		int m1[20][20],m2[20][20],res[20][20];
		int r,c,i,j;
		public:
			void insertm1(){
				cout<<"enter rows: ";
				cin>>r;
				cout<<"enter column: ";
				cin>>c;
				cout<<"enter the elements of first matrix: "<<endl;
				for (int i=0;i<r;i++){
					for(int j=0;j<c;j++){
						cin>>m1[i][j];
					}
				}
				
			}
			void insertm2(){
				cout<<"enter the elements of second matrix: "<<endl;
				for(int i=0;i<r;i++){
					for(int j=0;j<c;j++){
						cin>>m2[i][j];
					}
				}
			}
			void display1(){
				cout<<"first matrix: "<<endl;
					for (int i=0;i<r;i++){
						cout<<" ";
					for(int j=0;j<c;j++){
						
						cout<<m1[i][j]<<"\t";
					}
						cout<<"\n";
				}
			
			}
			void display2(){
				cout<<"second matrix: "<<endl; 
				for(int i=0;i<r;i++){
					cout<<" ";
 					for(int j=0;j<c;j++){
						cout<<m2[i][j]<<"\t";
					}
					cout<<"\n";
				}
			}
			void operator +()
			{
				cout<<" added matrix is: "<<endl;
				for(int i=0;i<r;i++){
					cout<<" ";
					for(int j=0;j<c;j++){
						res[i][j]=m1[i][j]+m2[i][j];
						cout<<res[i][j]<<"\t";
					}
					cout<<"\n";
				}
			}
};
int main(){
	matrix m;
	m.insertm1();
	m.insertm2();
	m.display1();
	m.display2();
	m.operator +();
	return 0;

}
