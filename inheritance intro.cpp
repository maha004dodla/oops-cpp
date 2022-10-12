#include<iostream>
using namespace std;
class personal{
	public:
		string name,phno;
		personal()
		{
			cout<<"personal class"<<endl;
		}
};
class student:public personal{
	public:
		string rollno,branch;
		student(string n,string p,string roll,string b)
		{
			name=n;
			phno=p;
			rollno=roll;
			branch=b;
		}
		void display()
		{
			cout<<name<<" "<<phno<<" "<<rollno<<" "<<branch<<endl;
		}
};
int main()
{
	student s1("maha","9701059871","21p31a1204","IT");
	s1.display();
}