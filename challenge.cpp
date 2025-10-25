#include<iostream>
using namespace std;
class Complex{
	int imag;
	int real;
public:
	void print(){
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
	void setvalues(int x,int y){
		real=x;
		imag=y;
	}
	Complex(){
		imag=0;
		real=0;
	}
	friend void operator << (ostream &x,Complex y);
};
void operator <<(ostream &x, Complex y){
	cout<<y.real<<" + "<<y.imag<<"i"<<endl;
}
int main(){
	Complex c1;
	c1.print();
	c1.setvalues(2,5);
	// c1.print();
	cout<<c1; 


}