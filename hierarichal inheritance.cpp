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
class employee:public personal{
	public:
		string emp_id,sub;
		employee(string n,string p,string e,string s):personal(e,s)
		{
		   emp_id=e;
		   sub=s;	
		}
		void display()
		{
			cout<<emp_id<<" "<<sub<<endl;
			personal::display();
		}
};
class student:public personal{
	public:
		string rollno,branch;
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
int main()
{
	student s1("maha","9701059871","21p31a1204","IT");
	s1.display();
	employee e1("maha","9701150538","1234","c++");
	e1.display();
}