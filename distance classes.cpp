#include<iostream>
#include<cmath>
using namespace std;
class dist{
	public:
		int feet,inches;
		dist()
		{
			
		}
		dist(int feet,int inches)
		{
			this->feet=feet;
			this->inches=inches;
		}
		void display()
		{
			cout<<this->feet<<" "<<this->inches<<endl;
		}
		~dist()
		{
			
		}
};
int main()
{
	int feet,inches;
	cin>>feet>>inches;
	dist d1(feet,inches);
	cin>>feet>>inches;
	dist d2(feet,inches);
	dist res;
	res.feet=d1.feet+d2.feet;
	res.inches=d1.feet+d2.inches;
	if(res.inches>=12)
	{
		res.feet=res.feet+(res.inches/12);
		res.inches=res.inches%12;
	}
	d1.display();
	d2.display();
	res.display();	
}