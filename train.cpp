#include<iostream>
using namespace std;
int main()
{
	int hrs,temp,rem;
	cout<<"enter the hrs:";
	cin>>hrs;
	while(hrs<13)
	{
	 temp=hrs%60;
	 hrs=hrs+30;
	 rem=hrs/60;
	}
}
