// CPP code to illustrate working of
// erase(idx)
#include <iostream>
#include <string>
using namespace std;
 
// Function to demo erase
void eraseDemo(string str)
{
	
	string temp;
	
	
	int x=str.length();
//	while(1)
//	{
//		temp=str;
//		// Deletes all characters except first one
//		str.erase(1);
//		
//			if(str=="1")
//			{
////				cout<<temp<<endl;
//				str=temp;
//				break;
//			}
//			else
//			{
//				temp.erase(temp.begin());
//			}
//		str=temp;		
//	}
	cout<<x;
}
 
// Driver code
int main()
{
    string str("hello");
 
    cout << "Before erase(idx) : ";
    cout << str << endl;
    eraseDemo(str);
 
    return 0;
}
