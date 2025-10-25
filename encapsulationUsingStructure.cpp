#include<iostream>
using namespace std;
struct student{
private:
	int age;
	char name[20];
	int marks;
public:
	void input(){
		cin>>age;
		cin.ignore();
		cin.getline(name,20);
		cin>>marks;
	}

	void printDetails(){
		cout<<"name is "<<name<<" ";
		cout<<"age  is "<<age<<" ";
		cout<<"marks is "<<marks<<" ";
		cout<<endl;
	}
};
int main()
{
	student s;
	s.input();
	s.printDetails();
	
	
	s.printDetails();

}