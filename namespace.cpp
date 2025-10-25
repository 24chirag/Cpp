#include<iostream>
using namespace std;
namespace chirag{
	void chiragSayHello(){
		cout<<"chirag say hello to all"<<endl;
	}
}
namespace chiragCoder{
	void chiragSayHello(int a){
		cout<<"chirag say hello to all coder "<<endl;
	}

}
using namespace chirag;
using namespace chiragCoder;
int main()
{
	chiragSayHello();


}