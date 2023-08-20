#include<iostream>
using namespace std;
class Array{
	public:
		int *ptr,i,n;
		
		Array()
		{
			cout<<"Enter the size of array:"<<endl;
			cin>>n;
			ptr=new int[10];
			for(i=0;i<n;i++)
			{
				cin>>ptr[i];
			}
		}
		void cal()
		{
			cout<<"Displaying the even elements of array:"<<endl;
			for(i=0;i<n;i++)
			{
				if(ptr[i]%2==0)
				{
					cout<<"The even number is:"<<ptr[i]<<endl;
				}
			}
			cout<<"Displaying the odd elements of array:"<<endl;
			for(i=0;i<n;i++)
			{
				if(ptr[i]%2!=0)
				{
					cout<<"The odd number is:"<<ptr[i]<<endl;
				}
			}
		}
		~Array(){}
};
int main()
{
	Array a;
	a.cal();
	a.~Array();
	
}
