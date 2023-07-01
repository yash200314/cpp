 #include<iostream>
using namespace std;

class time
{
	public:
	   int hour;
	   int min;
	   int sec;
	   
	   void settime()
	   {
		cout<<"enter the hour";
		cin>>hour;
		cout<<"enter the min";
	    cin>>min;
		cout<<"enter the sec";
		cin>>sec;
	  }
	   void showtime()
	   {
	   	cout<<hour<<"::hours"<<endl<<min<<"::minute"<<endl<<sec<<"::sec"<<endl;
	   }
	   void timeadd(int h,int m,int s)
	   {
	   	// min= min+m;
	   	// hour=hour+h;
	   	// sec=sec+s;
	   	if(h<=12)
		{
			hour=hour+h;
		}
		else if(m<=60)
		{
			min=min+m;
		}
		else
		{
			sec=sec+s;
		}
	   }
	   	
};
int main()
{
	int h,m,s;
	time t;
	t.settime();
	t.showtime();
	
	cout<<"\nenter the value to add\n";
	cout<<"enter the hour";
	cin>>h;
	cout<<"enter the min";
	cin>>m;
	cout<<"enter the sec";
	cin>>s;
	t.timeadd(h,m,s);
	t.showtime();

}
