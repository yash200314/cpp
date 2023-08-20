#include<iostream>
using namespace std;
class Account{
	public:
		string acc_name;
		int contact_no;
		
		void accept()
		{
			cout<<"Enter the name of account holder name:"<<endl;
			cin>>acc_name;
			cout<<"Enter the contact number of account holder:"<<endl;
			cin>>contact_no;
		}
		void display()
		{
			cout<<"The name of account holder name is:"<<acc_name<<endl;
			cout<<"The contact number of account holder is:"<<contact_no<<endl;
		}
};
class Saving :public Account{
	public:
		int sno;
		int bal;
		
		void accept1()
		{
			cout<<"Enter the saving account number:"<<endl;
			cin>>sno;
			cout<<"Enter the balance of account:"<<endl;
			cin>>bal;
		}
		void display1()
		{
			cout<<"The saving account number:"<<sno<<endl;
			cout<<"The balance of account:"<<bal<<endl;
		}
		void cal()
		{
			int ans;
			ans=00.5*bal;
			
			cout<<"The balance for saving account is:"<<ans<<endl;
		}
};
class Current :public Account{
	public:
		int cno;
		int bal;
		
		void accept2()
		{
			cout<<"Enter the current account number:"<<endl;
			cin>>cno;
			cout<<"Enter the balance of account:"<<endl;
			cin>>bal;
		}
		void display2()
		{
			cout<<"The current account number:"<<cno<<endl;
			cout<<"The balance of account:"<<bal<<endl;
		}
		void cal1()
		{
			int cur;
			cur=0.015*bal;
			
			cout<<"The balance for current account is:"<<cur<<endl;
		}
};
int main()
{
	Account a1;
	Saving s1;
	Current c1;
	
	int n,ch,i;
	cout<<"Enter the value:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		while(1)
		{
			cout<<"******Enter the choice*****"<<endl;
			cout<<"1.accepting --->>"<<endl;
			cout<<"2.saving account --->>"<<endl;
			cout<<"3.current account --->>"<<endl;
			cout<<"4.exit"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:cout<<"_*_*_*_*_*_Accepting_*_*_*_*_*_"<<endl;
					   a1.accept();
					   a1.display();
					   break;
				case 2:cout<<"*_*_*_*_*_Saving account*_*_*_*_*_*_"<<endl;
						s1.accept1();
						s1.display1();
						s1.cal();
						break;
				case 3:cout<<"*_*_*_*_*_Current account*_*_*_*_*_*_"<<endl;
						c1.accept2();
						c1.display2();
						c1.cal1();
						break;
				case 4:exit(0);
			}
		}
	}
}
