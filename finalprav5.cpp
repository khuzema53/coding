#include <iostream>

using namespace std;

class pants{
	
	int profit;
	
	public:
		pants()
		{
			profit=10;
		}
	
	friend operator < (pants &a);
};
//
//class shirt{
//	
//	int profit;
//	
//	public:
//		shirt()
//		{
//			profit=90;
//		}
//		
//	friend operator < (pants &a, shirt &b);
//};

operator <(pants &a)
{
	
}

int main()
{
	
}

