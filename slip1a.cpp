#include<iostream>
using namespace std;
class Maxi{
	public:
		inline int max(int a,int b)
		{
			return a>b?a:b;
		}
		inline int min(int a,int b)
		{
			return a<b?a:b;
		}
};
int main()
{
	Maxi m1;
	int a,b;
	cout<<"enter the a:"<<endl;
	cin>>a;
	cout<<"enter the b:"<<endl;
	cin>>b;
	
	cout<<"maximum is-"<<m1.max(a,b)<<endl;
	cout<<"minimum is-"<<m1.min(a,b)<<endl;
}
