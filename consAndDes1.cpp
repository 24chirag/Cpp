#include<iostream>
using namespace std;
class Product{
	int x,y;
	static int s;
public:
	void print(){
		cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	}
	void setValue(int a, int b)
	{
		x=a;
		y=b;
	}
	int get_x(){
		return x;
	}
	static int get_static_s(){//static member function
		return s;
	}
	static int set_static_s(int d){
		s=d;
		return 0;

	}
};
int Product :: s=100;
int main()
{
	Product p1,p2;
	cout<<"before set "<<endl;
	p1.print();
	p1.setValue(10,20);
	cout<<"after set "<<endl;
	p1.print();
	// cout<<p1.x<<endl;->cant access x bcoz x is private member 
	cout<<p1.get_x()<<endl;//we make member function to get value of x 
	// cout<<Product::s<<endl;->it is also private we cant access outside class
	// cout<<p1.get_static_s();->its logically invalid bcoz static variable is not a object variable 
	cout<<Product::get_static_s()<<endl;
	Product::set_static_s(999);
	cout<<Product::get_static_s()<<endl;








}