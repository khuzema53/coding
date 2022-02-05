#include<iostream>

using namespace std;

class student{
	
	int student_id;
	string name;
	
	public:
		get_data()
		{
			cout<<"BASE CLASS IS CALL"<<endl;
			cout<<"ENTER STUDENT ID: ";
			cin>>student_id;
			cout<<"ENTER NAME: ";
			cin>>name;	
		}
		display()
		{
			cout<<"BASE CLASS IS CALL"<<endl;
			cout<<"STUDENT ID: "<<student_id<<endl;
			cout<<"NAME: "<<name<<endl;
		}
};

class academic:public student{
	
	int student_id_2;
	string name_2;
	
	public:
		get_data()
		{
			cout<<"DERIVE CLASS IS CALL"<<endl;
			cout<<"ENTER STUDENT ID: ";
			cin>>student_id_2;
			cout<<"ENTER NAME: ";
			cin>>name_2;	
		}
		display()
		{
			cout<<"DERIVE CLASS IS CALL"<<endl;
			cout<<"STUDENT ID: "<<student_id_2<<endl;
			cout<<"NAME: "<<name_2<<endl;
		}	
};
int main()
{
	student *s;
	academic a;
	s=&a;
	s->get_data();
	s->display();
	
}
