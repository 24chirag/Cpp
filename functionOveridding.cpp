#include<iostream>
using namespace std;
class A{
public:
	void fun(){
		cout<<"Base class"<<endl;
	}
};
class B:public A{
public:
	void fun(){
		cout<<"derived class"<<endl;
	}
};
int main(){
	B obj;
	obj.fun();//derived class fun will run
	A obje;
	obje.fun();//base class fun will run
}