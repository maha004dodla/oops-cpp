#include<iostream>
#include<cmath>
using namespace std;
class QRoot{
	public:
		int a,b,c,d;
		float r1,r2;
		QRoot(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void discriminant()
		{
			this->d=(b*b)-(4*a*c);
		}
		void roots()
		{
			if(this->d>0)
			{
				this->r1=(-b+sqrt(this->d))/(2*a);
				this->r2=(-b-sqrt(this->d))/(2*a);
				cout<<this->r1<<" "<<this->r2<<"\n"<<"roots are real and unequal";
			}
			else if(this->d==0)
			{
				this->r1=(-b)/(2*a);
				this->r2=(-b)/(2*a);
				cout<<this->r1<<" "<<this->r2<<"\n"<<"roots are real and equal";
			}
			else
			{
				cout<<"roots are imaginary";
			}	
		}
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	QRoot q1(a,b,c);
	q1.discriminant();
	q1.roots();
	return 0;
}