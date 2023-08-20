#include<iostream>
using namespace std;
class Employee{
	public:
		int emp_code;
		string name;
		int salary;
		
		void accept()
		{
			cout<<"Enter the employee code:";
			cin>>emp_code;
			cout<<"Enter the employee name:";
			cin>>name;
			cout<<"Enter the employee salary:";
			cin>>salary;
		}
		void display1()
		{
			cout<<"The employee code is:"<<emp_code;
			cout<<"The employee name is:"<<name;
			cout<<"The employee salary is:"<<salary;
		}
};
class Fulltime:public Employee{
	public:
		int daily_wages;
		int no_of_days;
		
		void acceptfull()
		{
			cout<<"Enter the daily wages of employee:";
			cin>>daily_wages;
			cout<<"Enter the number of days of employee:";
			cin>>no_of_days;
		}
		void display2()
		{
			cout<<"The employee daily wages is:"<<daily_wages<<endl;
			cout<<"The employee number of days:"<<no_of_days<<endl;
			
			salary = daily_wages*no_of_days;
			cout<<"the salary of fulltime worker is:"<<salary<<endl;
		}
};
class Partime:public Employee{
	public:
		int no_of_hours;
		int hourly_wages;
		
		void acceptpart()
		{
			cout<<"Enter the hourly wages of employee:";
			cin>>hourly_wages;
			cout<<"Enter the number of hour of employee:";
			cin>>no_of_hours;
		}
		void display3()
		{
			cout<<"The employee hourly wages is:"<<hourly_wages<<endl;
			cout<<"The employee number of hours:"<<no_of_hours<<endl;
			
			salary = hourly_wages*no_of_hours;
			cout<<"the salary of Parttime worker is:"<<salary<<endl;
		}	
};
int main()
{
	int n,i,ch=0;
	//Employee e1[10];
	Fulltime f1[10];
	Partime p1[10];
	while(1)
	{
		cout<<"Enter the number of employee:"<<endl;
		cout<<"Display the data:"<<endl;
		cout<<"maximum salary of both employee:"<<endl;
		cout<<"exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter the value:";
				   cin>>n;
				   for(i=0;i<n;i++)
				   {
				   		cout<<"<-----this one is for Fulltime employee----->"<<endl;
				   	 	f1[i].acceptfull();
				   	 	cout<<"<------this one is for partime employee------>"<<endl;
				   	 	p1[i].acceptpart();
				   }
				   break;
			case 2:for(i=0;i<n;i++)
				   {
				   		f1[i].display2();
				   		p1[i].display3();
				   }
				   break;
			case 3:
					for(i=0;i<n;i++)
					{
						if(f1[i].salary>p1[i].salary)
						{
							cout<<"Fulltimes earns more:"<<f1[i].salary<<endl;
						}
						if(f1[i].salary<p1[i].salary)
						{
							cout<<"Partime earns more:"<<p1[i].salary<<endl;
						}
					}
		}
	}
}

