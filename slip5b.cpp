#include<iostream>
using namespace std;
class Shape{
	public:
		void virtual area()=0;
		
};
class Circle:public Shape{
	public:
		int cir;
		void area()
		{
			int r; 
			cout<<"Enter the radius:"<<endl;
			cin>>r;
			cir=3.14*r*r;
			
			cout<<"The area of circle is:"<<cir<<endl;
		}
};
class Sphere:public Shape{
	public:
		float sphe;
		void area()
		{
			float R;
			cout<<"Enter the radius for spher:"<<endl;
			cin>>R;
			
			sphe=4*3.14*R*R;
			
			cout<<"The area of sphere is:"<<sphe<<endl;
		}
};
class Cylinder:public Shape{
	public:
		float cyli;
		void area()
		{
			int r,h;
			cout<<"Enter the radius for cylinder:"<<endl;
			cin>>r;
			cout<<"Enter the height for cylinder:"<<endl;
			cin>>h;
			
			cyli=2*3.14*r*h+2*3.14*r*r;
			
			cout<<"The area of cylinder is:"<<cyli<<endl;
		}
};
int main()
{

	
	Shape*cptr;
	Shape *sptr;
	Shape *cyptr;
	
	Circle c1;
	Sphere s1;
	Cylinder cy1;
	
	cptr=&c1;
	sptr=&s1;
	cyptr=&cy1;
	
	cptr->area();
	sptr->area();
	cyptr->area();
	
}
