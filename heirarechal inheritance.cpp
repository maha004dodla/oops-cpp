#include<iostream>
using namespace std;
class personal{
	public:
		string name,phno;
		personal(string n,string pno)
		{
			name=n;
			phno=pno;
		}
		void display()
		{
			cout<<name<<" "<<phno<<endl;
		}
};
class student:public personal{
	public:
		string rollno,branch;
		static string college;
		student(string n,string p,string roll,string b):personal(n,p)
		{
			rollno=roll;
			branch=b;
		}
		void display()
		{
			cout<<rollno<<" "<<branch<<endl;
			personal::display();
		}
};
string student::college="aditya";
int main()
{
	student s1("maha","9701059871","21p31a1204","IT");
	s1.display();
}