#include<iostream>
using namespace std;
template <class t>
void bubble(t a[],int size){
	t temp;
	t i,j;
	for(int i=0;i<5-1;i++){
		for(int j=i+1;j<5;j++){
			if(a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
int main(){
	int a[]={2,5,6,3,8};
	bubble(a,5);
	cout<<"after swapping elements are: ";
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	
	}
	return 0;
}
