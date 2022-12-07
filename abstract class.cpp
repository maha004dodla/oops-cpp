#include<iostream>
using namespace std;
class Personal{
	public:
		string name;
		Personal(string name)
		{
			this->name=name;
		}
		virtual void display()=0;
		virtual void fun()=0;
};
class Student:public Personal{
	public:
		string rollno;
		Student(string name,string rollno):Personal(name)
		{
			this->rollno=rollno;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<endl;
		}
		void fun()
		{
			cout<<"hai"<<endl;
		}
};
int main()
{
	Personal *obj;
	Student s1("maha","1204");
	obj=&s1;
	obj->display();
	obj->fun();
}
