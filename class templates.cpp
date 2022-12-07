#include<iostream>
using namespace std;
template <typename T,typename U>
class student{
	public:
		T name;
		U rollno;
		student(T n,U roll)
		{
			name=n;
			rollno=roll;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<endl;
		}
};
int main()
{
	student<string,int> s1("maha",123);
	student<string,string> s2("siri","124");
	s1.display();
	s2.display();
}
