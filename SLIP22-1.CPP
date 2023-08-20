#include<iostream.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
class fd
{
int fdno, mnth, amt, rate, m_amt;
char nm[35];
public:
fd(int fno, int mnt, int am, int rt, char *name)
{
fdno=fno;
mnth=mnt;
amt=am;
rate=rt;
strcpy(nm, name);
}

void accept()
{
cout<<"\n\n Enter FD No : ";
cin>>fdno;
cout<<" Enter Customer Name : ";
cin>>nm;
cout<<" Enter Amount : ";
cin>>amt;
cout<<" Enter Peroid in Months : ";
cin>>mnth;
}

void display()
{
cout<<"\n\n FdNo. : "<<fdno;
cout<<"\n Name : "<<nm;
cout<<"\n Months : "<<mnth;
cout<<"\n Amount : "<<amt;
cout<<"\n Maturity Amount : "<<m_amt;
}

void calculate(int r=6)
{
int yr;
yr=mnth/12;
m_amt= amt+((amt*r*yr)/100);
cout<<"\n\n Rate : "<<r<<endl;
cout<<"\n Maturity amount : "<<m_amt;
} };

void main()
{
int fdno,mnth,rate,amt;
char *nm;
fd w(fdno, mnth, amt, rate, nm);
clrscr();
w.accept();
w.calculate();
w.display();
getch();
}