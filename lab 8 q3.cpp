#include<iostream>
using namespace std;
class parimeter{
	private:
		int length;
		int breath;
	public:
		parimeter(int l,int b){
			length=l;
			breath=b;
		}
		int calculateparimeter(void){
			return breath+length;
		}
	friend class printclass;
};
class printclass{
	public:
		void display(parimeter &p){
			cout<<"parimeter is "<<p.calculateparimeter();
	}
	
	
};
int main(){
	parimeter p=parimeter(9,10);
	printclass pc;
	pc.display(p);
}
