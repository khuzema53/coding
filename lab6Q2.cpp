#include<iostream>
using namespace std;
class item{
	
	
	string name[10];
	int item_no[5],price[5],n,i;
	static int sum;
	
	public:
	
	get_data()
	{
		cout<<"Enter the number of item a customer purchases: ";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter item "<<i+1<<": ";
			cin>>name[i];
			cout<<"Enter itemno: ";
			cin>>item_no[i];
			cout<<"Enter price: ";
			cin>>price[i];
			sum=sum+price[i];
		}
		
	}
	int sum_2()
	{
		return sum;
	}
	void display()
	{
		for(i=0;i<n;i++){
		
		cout<<"name of the item: "<<name[i]<<endl;
		cout<<"item no "<<item_no[i]<<endl;
		cout<<"price: "<<price[i]<<endl;
		}
		cout<<"**************TOTAL************"<<endl;
		cout<<"amount: "<<sum<<endl;
	}
};
int item::sum=0;
class discounted:public item{
	
	float discount;
	float total_discount;
	float sum_3;
	public:
		float dicount()
		{
			cout<<"ENTER DISCOUNT: ";
			cin>>discount;
			
			 sum_3= sum_2()*(discount/100);
			 total_discount=sum_2()-sum_3;
			 return total_discount;				
		}
	
};
  
int main()
{
	discounted I;
	
	I.get_data();
	I.display();
	cout<<"THE DISCNOUNTED PRICE IS: "<<I.dicount();
}
