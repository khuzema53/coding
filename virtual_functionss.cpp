#include <iostream>

using namespace std;

class base{
	
	public:
		virtual void print()=0;
};

class derive:public base{
	
	public:
		
		void print()
		{
			cout<<"mohammad";
		}
};

int main()
{

	derive d;
}
