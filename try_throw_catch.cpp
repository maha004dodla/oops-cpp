#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw "Zero division error";
		}
		else
		{
			cout<<(a/b)<<" "<<(a%b)<<endl;
		}
	}
	catch(const char *c)//specified catch block
	{
		cout<<c<<endl;
	}
	catch(...)//anonmous catch block
	{
		cout<<"error"<<endl;
	}
	cout<<"done!!!"; 	
}
