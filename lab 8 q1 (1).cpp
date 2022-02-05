#include<iostream>
using namespace std;
class numbering{
	private:
		int num;
	public:
		numbering(int i=0){
			num=i;
		}
		 numbering operator--(){
		 	numbering n;
		 	n.num=num*4;
		 	return n;
		 }
		 numbering operator--(int){
		 	numbering n;
		 	n.num=num/4;
		 	return n;
		 }
		 void print(void){
		 	cout<<num<<endl;
		 }
};
int main(){
	numbering n2=numbering(9);
	numbering n1,n3;
	n1=--n2;
	n3=n2--;

	n2.print();

	n1.print();
	
	n3.print();
}

