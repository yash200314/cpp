#include<iostream>
using namespace std;
int main()
{
	int l,b,h,ans,wl,bl,sqa;
	cout<<"enter the length";
	cin>>l;
	cout<<"enter the breadth";
	cin>>b;
	cout<<"enter the height";
	cin>>h;
	cout<<"enter the value of rectangle window";
	cin>>bl>>wl;
	cout<<"the square window is"<<ans;	
	sqa=bl*wl;
	
	ans=2*(l*b+b*l+l*h)-(bl-wl)*(bl-wl);
	cout<<"the ans is"<<ans;
}
