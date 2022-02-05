#include <iostream>


using namespace std;

template<class T,class B>
class stack{
	
	B *stackptr;
	int i;
	public:
		stack(T size)
		{
			stackptr=new B[size];
			i=0;
		}
		stack_push(B values)
		{
			cout<<values<<" ";
			stackptr[i]=values;
			i++;
		}
		stack_pop(T size)
		{
			for(int i=0;i<size;i++)
			{
				cout<<stackptr[i]<<" "; 
			}
			cout<<"stact is emply";
		}
	
};

int main()
{
	int size=5;
	float values=1.1;
	stack<int,double>s(5);
	
	cout<<"pushing vlues in "<<endl;
	for(int i=0;i<size;i++)
	{
		s.stack_push(values);
		values+=1.1;
	}
	cout<<endl;
	cout<<"stack is full"<<endl;
	s.stack_pop(size);
}
