#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"A class"<<endl;
		}
		void display()
		{
			cout<<"hai"<<endl;
		}
};
class B:virtual public A{
	public:
		B()
		{
			cout<<"B class"<<endl;
		}
};
class D:virtual public A{
	public:
		D()
		{
			cout<<"D class"<<endl;
		}
};
class C:public B,public D{
	public:
		C()
		{
			cout<<"C class"<<endl;
		}
};
int main()
{
	C obj1;
	obj1.display();
}