#include<iostream>
using namespace std;
int sum(int a , int b,int c=0)
{
	return a +b+c;
}
int mul(int a ,int b,int c=1);
int main(){
	cout<<sum(2,3)<<endl;
	cout<<mul(2,3);

}
int mul(int a,int b,int c)
{
	return a*b*c;
}
//you can only define default arguments weather in defination or in declaration but not in both
