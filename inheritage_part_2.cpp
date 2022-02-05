#include<iostream>

using namespace std;


class employ{
	
	int id_number;
	string name;
	
	public:
		get_data()
		{
			cout<<"ENTER EMPLOY ID: ";
			cin>>id_number;
			cout<<"ENTER YOUR NAME: ";
			cin>>name;
			fflush(stdin);
		}
		display()
		{
			cout<<"ID : "<<id_number<<endl;
			cout<<"NAME OF EMPLOY: "<<endl;
		}
};
class programmer:public employ{
	
	int number;
	
	public:
		get_data()
		{
			employ::get_data();
			cout<<"HOW MANY NUMBER OF LANGUAGE YOU KNOW: ";
			cin>>number;
		}
		display()
		{
			employ::display();
			cout<<"number of language: "<<number<<endl;
		}
		
	
};
int main()
{
	programmer p;
	p.get_data();
	p.display();	
}
