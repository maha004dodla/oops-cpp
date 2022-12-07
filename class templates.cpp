#include<iostream>
using namespace std;
template <typename T>
class student{
	public:
		string name;
		T rollno;
		student(string n,T roll)
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
	student<int> s1("maha",123);
	student<string> s2("siri","124");
	s1.display();
	s2.display();
}