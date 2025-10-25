#include<iostream>
#include<string.h>
using namespace std;
class Student{
private:int roll; char name[20];
protected: void setroll(int r){roll=r;}
		   void *setname(char*ptr)
		   {
		   	strcpy(name,ptr);
		   }
public: int getroll()
	{
		return roll;
	}
	char*getname(){
		return name;
	}
};
class Strength:private Student{
	 private:int height,weight;
	 protected:void setheight(int h){
	 	height=h;
	 }
	 void setweight(int w){
	 	weight=w;
	 }
	public: void setStudent(char*name,int r, int h, int w)
		{
			setname(name);
			setroll(r);
			height=h;
			weight=w;
		}
		int getheight()
		{
			return height;
		}
		int getweight(){
			return weight;
		}
		char* getParentName(){
			return getname();
		}
		int getParentRoll(){
			return getroll();
		}

};

int main(){
	Strength s;
	s.setStudent("chirag",20,170,80);
	cout<<s.getParentName()<<endl;
	cout<<s.getParentRoll()<<endl;
	cout<<s.getheight()<<"cms"<<endl;
	cout<<s.getweight()<<"kgs"<<endl;

}