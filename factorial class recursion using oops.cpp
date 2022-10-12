#include<iostream>
#include<cmath>
using namespace std;
class fact{
	public:
		long long int num;
		long long int find_fact(int num)
		{
			if(num==0)
			{
				return 1;
			}
			return num*find_fact(num-1);
		}
};
int main()
{
	int num;
	cin>>num;
	fact f;
	cout<<f.find_fact(num);	
}