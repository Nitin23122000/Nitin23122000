#include<iostream>
using namespace std;
class college{
	private:
		char lecture_name[20];
		char subject_name[20];
		char course[20];
	    int n;
		int lecture[5];
		
		public:
			void initialize(){
				cout<<"name of the lecture: "<<endl;
				gets(lecture_name);
				cout<<"name of the subject: "<<endl;
				gets(subject_name);
				cout<<"name of the course: "<<endl;
				gets(course);
				cout<<"enter the number of lectures: ";
				cin>>n;
				
				for(int i=0;i<n;i++){
				cout<<"number of lecture: "<<i+1<<" "<<endl;
				cin>>lecture[i];
				}
				}
				void display(){
					cout<<"name: "<<lecture_name<<endl;
					cout<<"subject: "<<subject_name<<endl;
					cout<<"course: "<<course<<endl;
				}
			
};
int main(){
	college c;
	c.initialize();
	c.display();
	return 0;
	
}