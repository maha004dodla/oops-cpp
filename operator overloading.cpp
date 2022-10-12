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
		Time operator +(Time &T)
		{
			Time t3;
			t3.hrs=this->hrs+T.hrs;
			t3.min=this->min+T.min;
			if(t3.min>=60)
			{
				t3.hrs=t3.hrs+1;
				t3.min=t3.min-60;
			}
			return t3;
		}
};
int main() 
{
    Time t1(8,59);
    Time t2(7,1);
    Time t3=t1+t2;
    cout<<t3.hrs<<" : "<<t3.min<<endl;
    
}