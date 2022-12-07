#include<iostream>
using namespace std;
template <typename T>
T sum(T a,T b)
{
	return a+b;
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,b);
	cout<<sum(c,d);
}