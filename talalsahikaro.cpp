#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
class bank
{
	int accountnumber;
	string name;
	double balance;
	public:
		void getdata()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Account Number: ";
			cin>>accountnumber;
			cout<<"Enter balance: ";
			cin>>balance;
		}
		void show()
		{
			cout<<" "<<name<<" "<<accountnumber<<" "<<balance;
		}
		void storedata();
		void viewrecord();
//		void searchbook(char *);
};

void bank::viewrecord()
{
	
	ifstream f;
	f.open("BANK.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"File Does Not Exist ";
		
	}
	else
	{
		
		f.read((char*)this,sizeof(*this));
		while(!f.eof())
		{
			show();
			f.read((char*)this,sizeof(*this));
		}
		f.close();
	}

	}
	

void bank::storedata()
{
	ofstream f;
	f.open("BANK.dat",ios::app|ios::binary);
	f.write((char*)this,sizeof(*this));
	
	f.close();
}
int main()
{
	bank B1;
	B1.getdata();
	B1.show();
	B1.storedata();
//	B1.searchbook("talal");
	B1.viewrecord();
	return 0;
}
