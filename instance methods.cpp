#include<iostream>
using namespace std;
class class_name{
	int a=10;//a,b---private instance variables;
	int b;
	private://private instance method
		void fun()
		{
			cout<<"hai";
		}
	public://public instance method
		void fun1()
		{
			//cout<<a;
			fun();
		}
};
int main()
{
	class_name obj;
	obj.fun1();
}