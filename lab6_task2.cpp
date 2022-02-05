#include <iostream>

using namespace std;


class item{
	
	string item_name;
	float price;
	int item_no;
	
	public:
		get_data()
		{
			cout<<"ENTER ITEM NAME: ";
			cin>>item_name;
			fflush(stdin);
			cout<<"ENTER ITEM_NO: ";
			cin>>item_no;
			cout<<"ENTER PRICE: ";
			cin>>price;
		}
		float get_price()
		{
			return price;
		}
		string get_itemname()
		{
			return item_name;
		}
		int get_itemno()
		{
			return item_no;
		}
};

class discounted:public item{
	
	float discount;
	float price_after_discount;
	float total_discount;
	static float total;
	public:
		input_discount()
		{
			cout<<"ENTER DISCOUNT: ";
			cin>>discount;
		}
		get_data()
		{
			item::get_data();
		}
		total_1()
		{
//			price_after_discount=get_price()*(discount/100);
//			total_discount=get_price()-price_after_discount;
			total=total+get_price();
		}
		display()
		{
			cout<<"THE TOTAL AMOUNT IS :"<<total_discount;
			
		}
		float dicounted_price()
		{
			price_after_discount=total*(discount/100);
			total_discount=total-price_after_discount;
			return total_discount;
		}
}; 
float discounted::total=0.0;

int main()
{
	int i;
	int k;
	cout<<"ENTER HOW MANY ITEM YOU WANT TO ORDER?? ";
	cin>>k;
	discounted d[k];
	for(i=0;i<k;i++)
	{
		d[i].get_data();
		d[i].total_1();	
	}
	d[k-1].input_discount();
	cout<<"THE DISCOUNTED PRICE IS:"<<d[k-1].dicounted_price();
	
}







