#include<iostream>
using namespace std;
int Add(int a , int b)
{
	return a+b;
}
//type of argument is different 
double Add(double a, double b)//function overloading ->signature of each function must be different in cpp
{
	return a+b;
}
//here number of argument is different ->so function signature is different
//hence it is function overloading 
int Area(int l,int b)
{
	return l*b;
}
int Area(int s)
{
	return s*s;
}

int main()
{
	cout<<Add(2.0,3.9)<<endl;

}