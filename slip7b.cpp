#include<iostream>
using namespace std;
class Person{
	public:
		char city[10];
		string name;
		int age,mno;
		 
		void accept()
		{
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the city:"<<endl;
			cin>>city;
			cout<<"Enter the age:"<<endl;
			cin>>age;
			cout<<"Enter the mobile number:"<<endl;
			cin>>mno;
		}
		void display()
		{
			cout<<"The name is-->"<<name<<endl;
			cout<<"The city is-->"<<city<<endl;
			cout<<"The age is-->"<<age<<endl;
			cout<<"The mobile number is-->"<<mno<<endl;
		}
		
		//searching mobile number
		void search()
		{
			int no;
			cout<<"Enter the number:"<<endl;
			cin>>no;
			if(mno==no)
			{
				cout<<"The name of person is:"<<name<<endl;
			}
		}
		//searching Person name of given mobile number
		void search(string name)
		{
			string per;
			cout<<"Enter the name of person that is to be searched:"<<endl;
			cin>>per;
			//cout<<per;
			if(per==per)
			{
				cout<<"number is:"<<mno<<endl;
			}
			
		}
		//searching city
		void search(char city)
		{
			cout<<"Enter the city that is to be searched:"<<endl;
			cin>>city;
			if(city==city)
			{
				cout<<"The name of person is:"<<name<<endl;
				cout<<"the age of person is:"<<age<<endl;
				cout<<"The mobile number is:"<<mno<<endl;
			}
		}
	
};
int main()
{
	string name;
	char city[10];
	int n,i,ch;
	Person p1;
	//p1.accept();
	//p1.display();
	//p1.search();
	//p1.search(name);
	//p1.search(city[10]);
	
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		while(1)
		{
			cout<<"*****Enter the choice******"<<endl;
			cout<<"1) Accepting the data:"<<endl;
			cout<<"2) searching mobile number:"<<endl;
			cout<<"3) searching Person name of given mobile number:"<<endl;
			cout<<"4) search city:"<<endl;
			cout<<"5) exit:"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:cout<<"*****Accepting the data*****"<<endl;
						p1.accept();
						break;
				case 2:p1.search();
						break;
				case 3:p1.search(name);
						break;
				case 4:p1.search(city);
						break;
				case 5:exit(0);
			}
		}
	}
}
