//slip2aquestion

#include<iostream>
using namespace std;
float vol(int,int);//cylinder
float vol(float,float);//cone
float vol(int);//sphere

int main()
{
	int r,h,r2;
	float r1,h1;
	
	// vol=3.14*r*r*h
	
	cout<<"Enter the radius of cyclinder:--";
	cin>>r;
	cout<<"Enter the height of cyclinder:--";
	cin>>h;	
	
	//pass the float value for cone;
	// vol=1/3 3.14*r*r*h
	
	cout<<"Enter the radius of cone:--";
	cin>>r1;
	cout<<"Enter the height of cone:--";
	cin>>h1;
	
	//
	cout<<"Enter the radius for sphere:--";
	cin>>r2;
	
	cout<<"Volume of cyclinder is:"<<vol(r,h)<<endl;
	cout<<"Volume of cone is:"<<vol(r1,h1)<<endl;
	cout<<"Volume of sphere is:"<<vol(r2)<<endl;
}
float vol(int r,int h)//cyclinder
{
	return 3.14*r*r*h;
}
float vol(float r1,float h1)//cone
{
	return 1/3*3.14*r1*r1*h1;
}
float vol(int r2)//sphere
{
	return 4/3*3.14*r2*r2*r2;
}
