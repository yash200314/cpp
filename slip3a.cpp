//slip no3aquestion

#include<iostream>
using namespace std;
void swap(int *x,int *y)//call by referance method
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int x,y;
	cout<<"Enter the value for x";
	cin>>x;
	cout<<"Enter the value for y";
	cin>>y;
	//the use of pointer variable
	swap(&x,&y);
	cout<<"value of x is:"<<x<<endl;
	cout<<"value of y is:"<<y<<endl;
}
