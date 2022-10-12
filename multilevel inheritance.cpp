#include<iostream>
using namespace std;
class landline{
	public:
		landline()
		{
			cout<<"calls";
		}
};
class mobile:public landline{
	public:
		mobile()
		{
			cout<<"messages,games";
		}
};
class smartmobile:public mobile{
	public:
		smartmobile()
		{
			cout<<"video calls,movies";
		}
};
int main()
{
	smartmobile sm1;
}