//slip5a
#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		void setpoint()
		{
			cout<<"Enter the number for x:";
			cin>>x;
			cout<<"Enter the number for y:";
			cin>>y;
		}
};
int main()
{
	point p1;
	p1.setpoint();
}
