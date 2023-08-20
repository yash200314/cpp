#include<iostream>
using namespace std;

class square;
class rectangle{
	public:
		int l,b,area;
		void input()
		{
			cout<<"Enter the length:";
			cin>>l;
			cout<<"Enter the breath:";
			cin>>b;
		}
		void display()
		{
			area=l*b;
			cout<<"the area of rectangle is :"<<area<<endl;
		}
		
		friend int compare(rectangle,square);	
			
};
class square{
	public:
		int a,area;
		void input()
		{
			cout<<"Enter the area for square:";
			cin>>a;
		}
		void display()
		{
			area =a*a;
			cout<<"the area of square is:"<<area<<endl;
		}
		
		friend int compare(square,rectangle);
};
int compare(rectangle r1, square s1)
{
	return r1.area>s1.area;
}
int compare(square s1, rectangle r1)
{
	return s1.area>r1.area;
}
int main()
{
 	rectangle r1;
 	r1.input();
 	r1.display();
 	
 	square s1;
 	s1.input();
 	s1.display();
 	
 	if(compare(r1,s1))
 	{
 		cout<<"rectangle is greater than square"<<endl;	
	}
	if(compare(s1,r1))
 	{
 		cout<<"square is greater than rectangle"<<endl;	
	}
}
