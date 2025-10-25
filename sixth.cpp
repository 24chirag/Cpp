#include<iostream>
using namespace std;
class Product{
	int x,y;
	static int s;
public:
	void print(){
		cout<<"x = "<<x<<" "<<"y = "<<y<<" "<<endl;
	}
	void setValues(int a, int b){
		x=a;
		y=b;
	}
};
int main()
{
Product p1;
p1.print();
p1.setValues(11,22);
p1.print();
}