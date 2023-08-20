#include<iostream>
using namespace std;
class account
{
	public:
			int bal=1000;	
};
class customer:public account
{
	public:
			string name="Ram";	
};
int main()
{
	customer c1;
	cout<<"name:"<<c1.name<<endl;
	cout<<"balance:"<<c1.bal<<endl;
}

