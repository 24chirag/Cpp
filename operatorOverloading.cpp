#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
public:
	void print(){
		cout<<this->real<<" + "<<this->img<<"i"<<endl;
	}
	Complex add(Complex t)
	{
		Complex temp;
		temp.real=t.real+this->real;
		temp.img=t.img+this->img;
		return temp;
	}
	void setvalues(int re,int i){
		this->real=re;
		this->img=i;
	}	
	Complex operator + (Complex t) //operator overloading 
	{
		Complex temp;
		temp.real=t.real+this->real;
		temp.img=t.img+this->img;
		return temp;
	}
};
int main(){
	Complex c1,c2,c3;      //operator->function ->using operator keyword 
	c1.setvalues(2,3);
	c1.print();
	c2.setvalues(4,2);
	c2.print();
	// c3=c1.add(c2);
	// c3.print();
	// c3 = c1+c2;
	c3 = c1.operator +(c2);
	c3.print();




}