#include<iostream>
using namespace std;
class cricketer{
	
};
class batsman:public cricketer{

	int total=0;
		int n;
		int innings[20];
		int  average_runs;
		int best_perf[20];
		int biggest;
		public:
		void inning(){
			cout<<"   enter the number of innings: ";
			cin>>n;
			for(int i=0;i<n;i++){
			
				cout<<"enter the runs of inning"<<i+1<<": "<<endl;
				cin>>innings[i];
			   total=total+innings[i];
			   cout<<endl;
		} cout<<"total runs are: "<<total<<endl;
			   biggest=innings[0];
			   for(int j=0;j<n;j++){
			   	if(innings[j]>biggest){
			   		biggest =innings[j];
				   }
			   }
			   cout<<"\nPlayer's best performance is: "<<biggest;	
		}
		void average(){
			average_runs=total/n;
			cout<<"\n\naverage runs are: "<<average_runs<<endl;
				
		}
	
};
int main(){
	batsman b;
	b.inning();
	b.average();
	return 0;
}
