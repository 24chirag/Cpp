#include<iostream>
using namespace std;
namespace chirag{
	void chiragSayHello(){
		cout<<"haa ji hello bolre h "<<endl;
	}
};
using namespace chirag;

class A{
private:int salary;
protected: void setSalary(int s)
	{
		salary=s;
	}
public: int getSalary(){
	return salary;
}
};
class B{
private:int bonus;
protected:void setBonus(int b){
	bonus=b;
}
public: int getBonus(){
	return bonus;
}
};
class c:public A, public B{
public:
	void setchildSalary(int s)
	{
		setSalary(s);

	}
	void setchildBonus(int b)
	{
		setBonus(b);

	}
	int getTotalSalary()
	{
		return getSalary()+getBonus();
	}

};
int main(){
	c obj;
	obj.setchildSalary(10000);
	obj.setchildBonus(5000);
	cout<<"salary is "<<obj.getSalary()<<endl;
	cout<<"bonus is "<<obj.getBonus()<<endl;
	cout<<"total salary is "<<obj.getTotalSalary()<<endl;
	chiragSayHello();

	
	

}