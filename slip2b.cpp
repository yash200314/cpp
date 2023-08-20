#include<iostream>
using namespace std;
class Learning_info{
	public:
		int roll_no;
		string stud_name;
		string clas;
		float percentage;
};
class Earning_info{
	public:
		int hours;
		int charges;		
};
class Earn_Learn_Info:public Learning_info,Earning_info{
	public:
		void accept()
		{
			cout<<"Enter the roll_no:"<<endl;
			cin>>roll_no;
			cout<<"Enter the student name:"<<endl;
			cin>>stud_name;
			cout<<"Enter the class of the student:"<<endl;
			cin>>clas;
			cout<<"Enter the percentage:"<<endl;
			cin>>percentage;
		}
		void display()
		{
			cout<<"The roll_number is:"<<roll_no<<endl;
			cout<<"The name of student is:"<<stud_name<<endl;
			cout<<"The class of student is:"<<clas<<endl;
			cout<<"The percentage of student is:"<<percentage<<endl;
		}
		void sal()
		{
			cout<<"Enter the number of hours worked:"<<endl;
			cin>>hours;
			cout<<"Enter the charges:"<<endl;
			cin>>charges;
		}
		void display2()
		{
			cout<<"total work hours:"<<hours;
			cout<<"total charges:"<<charges;
			
			char ch,y;
			float total;
			cout<<"\n press y to know the salary:";
			cin>>ch;
			if(ch=='y')
			{
				total=hours*charges;
				cout<<"\n total money:"<<total;
			}
			else{
				cout<<"no data to be showed:";
			}
		}
};
int main()
{
	class Earn_Learn_Info e,l;
	int ch;
	while(1)
	{
		cout<<"\n plz select any:"<<endl;
		cout<<"\n1.For student data:"<<endl;
		cout<<"\n2.for charges information:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: 
			{
				e.accept();
				e.display();
				break;
			}
			case 2:
			{
				l.sal();
				l.display2();
			}
			case 3:
			{
				cout<<"Exit"<<endl;
				exit(0);
			}
		}
	}
}

