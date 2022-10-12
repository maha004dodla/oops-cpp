#include <iostream>
using namespace std;
class Time{
	public:
		int hrs,min;
		Time()
		{
			
		}
		Time(int h,int m)
		{
			hrs=h;
			min=m;
		}
		void operator ++(int)
		{
			hrs++;
			min++;
		}
};
int main() 
{
    Time t1(7,50);
    Time t2(8,15);
    t1++;
	t2++;
	cout<<t1.hrs<<":"<<t1.min<<endl;
	cout<<t2.hrs<<":"<<t2.min<<endl;   
}
    

