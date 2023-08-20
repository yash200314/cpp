#include<iostream>
using namespace std;
class Matrix{
	public:
		int mat[10][10];
		int r,c,i,j;
		
		Matrix()
		{
			cout<<"Enter the number of rows:"<<endl;
			cin>>r;
			cout<<"Enter the number of column:"<<endl;
			cin>>c;
			mat[r][c];
		}
		void accept()
		{
			cout<<"Enter the element in matrix:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<"Enter the elements:"<<i<<","<<j<<"th position:";
					cin>>mat[i][j];
				}
				cout<<"\n";
			}
			cout<<endl;
		}
		void display()
		{
			cout<<"Displaying the matrix element:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<mat[i][j];
				}
				cout<<"\n";
			}
			cout<<endl;
		}
		void transpose()
		{
			cout<<"Transpose of matrix is:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<mat[j][i];
				}
				cout<<"\n";
			}
			cout<<endl;
		}
		
		~Matrix(){};
};
int main()
{
	Matrix m1;
	m1.accept();
	m1.display();
	m1.transpose();
	
}
