#include<iostream>
using namespace std;
struct  student
{
	int age;
	char name[20];
	float marks;
	
};
void principleDetails(struct student x)
{
	cout<<"age is = "<<x.age<<" "<<"name is = "<<x.name<<" "<<" marks is = "<<x.marks<<endl;
}
int main(){
	struct student s ={19,"chirag",98.7};
	cout<<"intialised student s "<<s.name<<endl;

	struct student s2;
	s2.age=22;

	strcpy(s2.name,"mohit sharma");
	s2.marks=89;
	cout<<"s2 variable mannually intialised "<<s2.name<<endl;

	cout<<"taking value from user "<<endl;
	struct student s3;
	cin>>s3.age;
	// cin>>s3.name;//it is not taking space in name ----->so we use cin.getline(variable,length);
	cin.ignore();//it is use to clear the standard input buffer which contains space from above enter
	cin.getline(s3.name,90);
	cin>>s3.marks;
	cout<<"s3 value taken by user is "<<s3.name<<endl;
	cout<<"marks of s3 is  "<<s3.marks<<endl;
	principleDetails(s3);
	principleDetails(s);
	principleDetails(s2);



}