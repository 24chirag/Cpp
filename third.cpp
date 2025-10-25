#include<iostream>
using namespace std;
int main(){
	int x=10;
	int &y=x;//y ki binding x k saath kr di
	cout<<"x "<<x<<endl;
	cout<<"y "<<y<<endl;
	x=x-10;
	cout<<" new x "<<x<<endl;
	cout<<" new y "<<y<<endl;


}